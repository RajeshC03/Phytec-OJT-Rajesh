#include <stdio.h>
#include <curl/curl.h>

// Callback function to handle the response data
size_t write_callback(void* contents, size_t size, size_t nmemb, void* userp) {
    size_t realsize = size * nmemb;
    printf("%.*s", (int)realsize, (char*)contents);
    return realsize;
}

int main() {
    // Initialize cURL
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    // Create a cURL handle
    curl = curl_easy_init();
    if (curl) {
        // Set the URL to make the request to
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.example.com");

        // Set the callback function to handle the response data
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

        // Make the request
        res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        // Clean up
        curl_easy_cleanup(curl);
    }

    // Clean up cURL global state
    curl_global_cleanup();

    return 0;
}

