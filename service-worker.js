/**
 * Copyright 2016 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

// DO NOT EDIT THIS GENERATED OUTPUT DIRECTLY!
// This file should be overwritten as part of your build process.
// If you need to extend the behavior of the generated service worker, the best approach is to write
// additional code and include it using the importScripts option:
//   https://github.com/GoogleChrome/sw-precache#importscripts-arraystring
//
// Alternatively, it's possible to make changes to the underlying template file and then use that as the
// new base for generating output, via the templateFilePath option:
//   https://github.com/GoogleChrome/sw-precache#templatefilepath-string
//
// If you go that route, make sure that whenever you update your sw-precache dependency, you reconcile any
// changes made to this original template file with your modified copy.

// This generated service worker JavaScript will precache your site's resources.
// The code needs to be saved in a .js file at the top-level of your site, and registered
// from your pages in order to be used. See
// https://github.com/googlechrome/sw-precache/blob/master/demo/app/js/service-worker-registration.js
// for an example of how you can register this script and handle various service worker events.

/* eslint-env worker, serviceworker */
/* eslint-disable indent, no-unused-vars, no-multiple-empty-lines, max-nested-callbacks, space-before-function-paren, quotes, comma-spacing */
'use strict';

var precacheConfig = [["bower_components/iron-a11y-keys-behavior/iron-a11y-keys-behavior.html","29525580c0d4f39a6d65ef1ea65dfa7b"],["bower_components/iron-behaviors/iron-button-state.html","7f7f96935de5deaf9a51264225eb1a5a"],["bower_components/iron-behaviors/iron-control-state.html","f1329af310a186a0c3ce264937c34c5e"],["bower_components/iron-flex-layout/iron-flex-layout.html","3e285c2698feec264710fffd609630ad"],["bower_components/iron-icon/iron-icon.html","0d81dc84af38dfdaa7eca375ab7a9b9e"],["bower_components/iron-icons/iron-icons.html","f167b940536136378cba6ddbc6bb00d0"],["bower_components/iron-iconset-svg/iron-iconset-svg.html","b4ba3d89346b84fd775da5d96c484015"],["bower_components/iron-meta/iron-meta.html","bc20529471c77127055f986018af2a23"],["bower_components/iron-range-behavior/iron-range-behavior.html","562798494651ec5c2a47e7ef0e70d9de"],["bower_components/paper-behaviors/paper-button-behavior.html","d3c9b2685f6e6585da6cf1e632c50574"],["bower_components/paper-behaviors/paper-ripple-behavior.html","360acdba9e68fb7bf5c2be15f3fc5845"],["bower_components/paper-button/paper-button.html","e56a59ed88bb90e19df8338c53e984a5"],["bower_components/paper-fab/paper-fab.html","d2179fce15722c8defad314178fb03d7"],["bower_components/paper-progress/paper-progress.html","b04d3e2fed5dcf1060fa9120078873fe"],["bower_components/paper-ripple/paper-ripple.html","4101ea573f9fe2526b3938aad9c804c0"],["bower_components/paper-styles/color.html","549925227bc04f9c17b52e2e35cd2e26"],["bower_components/paper-styles/default-theme.html","5357609d26772a270098c0e3ebb1bb98"],["bower_components/paper-styles/element-styles/paper-material-styles.html","8d8d619e6f98be2c5d7e49ca022e423c"],["bower_components/paper-styles/shadow.html","1f23a65a20ed44812df26a9c16468e3f"],["bower_components/polymer/lib/elements/array-selector.html","13f4740735a915be0e50ba6a63ed90d7"],["bower_components/polymer/lib/elements/custom-style.html","af3ddc8b66d5a50f3a4b584d43090915"],["bower_components/polymer/lib/elements/dom-bind.html","3e642e81f832d69360fb29f7bfa9d752"],["bower_components/polymer/lib/elements/dom-if.html","e76d292871019807b1903d1c4a07147e"],["bower_components/polymer/lib/elements/dom-module.html","03d709239d9f30b27a38f6ad51eb3cf0"],["bower_components/polymer/lib/elements/dom-repeat.html","3d4133bd69d9a8a12682b8386bcd50c3"],["bower_components/polymer/lib/legacy/class.html","b114ba5596f2c46809f6015184f695bd"],["bower_components/polymer/lib/legacy/legacy-element-mixin.html","f1377a1da971f174729578f0e9caac2d"],["bower_components/polymer/lib/legacy/mutable-data-behavior.html","28624529941c143a2c89a560f5be9a3e"],["bower_components/polymer/lib/legacy/polymer-fn.html","4ecb6f82dd2003974ec5004dcb5644f0"],["bower_components/polymer/lib/legacy/polymer.dom.html","6ded7e4df3f70b01cb85ea1ce1bfebbd"],["bower_components/polymer/lib/legacy/templatizer-behavior.html","499ccaf2f4ddf10fc22775674021e4c1"],["bower_components/polymer/lib/mixins/element-mixin.html","6e834b50e4ecc362ab669f6a6458f5d9"],["bower_components/polymer/lib/mixins/gesture-event-listeners.html","2adeec3f92aa2847b0fc89190c6f48de"],["bower_components/polymer/lib/mixins/mutable-data.html","c3da616d8fc7f5d73f01e59c9f74e2fb"],["bower_components/polymer/lib/mixins/property-accessors.html","cac80c227b5699f3299451bc72c1ac6b"],["bower_components/polymer/lib/mixins/property-effects.html","5aa13a91bfc85c095b42fddd02f762f5"],["bower_components/polymer/lib/mixins/template-stamp.html","f2618c862b1780d9add415d2a0c4c283"],["bower_components/polymer/lib/utils/array-splice.html","1caf5b485e0d3b5e5e8473bd4aee2051"],["bower_components/polymer/lib/utils/async.html","964f41ccd907d5d57106685d618f8262"],["bower_components/polymer/lib/utils/boot.html","b3fede816782ec1791b4930fbccdec92"],["bower_components/polymer/lib/utils/case-map.html","fbcc9191460c40f56274059303f240f5"],["bower_components/polymer/lib/utils/debounce.html","b82b45dd67d803863875428273dbd278"],["bower_components/polymer/lib/utils/flattened-nodes-observer.html","51a62175d3c1242676bd97395b2246f1"],["bower_components/polymer/lib/utils/flush.html","3f1ae81bfde1d720931126833dcb6c12"],["bower_components/polymer/lib/utils/gestures.html","c688f29f85a75f0f6ef1d845cd82e0f1"],["bower_components/polymer/lib/utils/import-href.html","ab67a53713c709ca6422271643e5c6ef"],["bower_components/polymer/lib/utils/mixin.html","48def86200787e0dec66d862f6fbf945"],["bower_components/polymer/lib/utils/path.html","c6c703f031a793a1d013efb629f13f7f"],["bower_components/polymer/lib/utils/render-status.html","f1d2f69c7dc8114d8daa841c9a85bf70"],["bower_components/polymer/lib/utils/resolve-url.html","9655e21ed83a0b9c7daab6e150001dda"],["bower_components/polymer/lib/utils/settings.html","f3ea2029347fb4a2775eed852987bee9"],["bower_components/polymer/lib/utils/style-gather.html","7d5925ca13aaea95388d0294888340f1"],["bower_components/polymer/lib/utils/templatize.html","d575f0ecbdbce4ca1d3d35a59d0261d7"],["bower_components/polymer/lib/utils/unresolved.html","2ed3277470301933b1af10d413d8c614"],["bower_components/polymer/polymer-element.html","7e714c300932fa5c6d7bee1c8da03721"],["bower_components/polymer/polymer.html","041f02f3388a7a3c087298fde431df80"],["bower_components/prism-element/demo/prism-demo.html","d6aa007ff810fd3a3a724fb3bff8ee9a"],["bower_components/prism-element/prism-highlighter.html","9f5de37290eb9aa2896b671d25ff8bab"],["bower_components/prism-element/prism-import.html","9ed19158a2c23c9fa5cb3b2953eeefac"],["bower_components/prism-element/prism-theme-default.html","b31328e57256a2ed2f5c9cf6ca539e3b"],["bower_components/prism/prism.js","0f274d292fdf801a10af179becd1321f"],["bower_components/prism/themes/prism.css","298e3aafa62f48b863042aa3696a2b34"],["bower_components/shadycss/apply-shim.html","5b73ef5bfcac4955f6c24f55ea322eb1"],["bower_components/shadycss/apply-shim.min.js","058df1a64fc2a4db3a1bceca054be299"],["bower_components/shadycss/custom-style-interface.html","7e28230b85cdcc2488e87172c3395d52"],["bower_components/shadycss/custom-style-interface.min.js","021cb6e169bd7c5ecc405c048894e043"],["bower_components/webcomponentsjs/custom-elements-es5-adapter.js","a5043c1d0dd16d84558ee6cc2276212e"],["bower_components/webcomponentsjs/gulpfile.js","0366da1f0f7858c9af2daa3ef7d950ea"],["bower_components/webcomponentsjs/webcomponents-hi-ce.js","ac506890cf3f0f8ef4017398fa4034a0"],["bower_components/webcomponentsjs/webcomponents-hi-sd-ce.js","c53b10e1469a4d6b1108cd5ec995875b"],["bower_components/webcomponentsjs/webcomponents-hi.js","b88ce284fda849097ab4997d97bfc8b6"],["bower_components/webcomponentsjs/webcomponents-lite.js","fc5fd8d2c8b27139307536abb8aecda7"],["bower_components/webcomponentsjs/webcomponents-loader.js","f13bbbbf647b7922575a7894367ddaaf"],["bower_components/webcomponentsjs/webcomponents-sd-ce.js","b4daa8feea009da29844c0ceffde61dd"],["index.html","a2691d3e689a02fd716d2c3689659807"],["lib/babel-polyfill.min.js","e1ef40b9cefcb570b6196345cffeec7b"],["lib/babel.min.js","0d2961fafdd5256f14aafe311490e4f5"],["lib/webdnn.js","0828540e491675470333b44217cfd7ef"],["manifest.json","6d9c557309903d40c447a3df55c9005a"],["src/anime-image-uploader.html","75a52d419b8b56464da2b42d7d275f0c"],["src/my-view2.html","3ad055df8e90683b67b195acd7b7aeea"],["src/shared-styles.html","d5133ed0135bb42a87b98527f8f1c7aa"],["src/slideshow.html","e9ae3bcacdd670d3cd6bd0eff14df235"]];
var cacheName = 'sw-precache-v3--' + (self.registration ? self.registration.scope : '');


var ignoreUrlParametersMatching = [/^utm_/];



var addDirectoryIndex = function (originalUrl, index) {
    var url = new URL(originalUrl);
    if (url.pathname.slice(-1) === '/') {
      url.pathname += index;
    }
    return url.toString();
  };

var cleanResponse = function (originalResponse) {
    // If this is not a redirected response, then we don't have to do anything.
    if (!originalResponse.redirected) {
      return Promise.resolve(originalResponse);
    }

    // Firefox 50 and below doesn't support the Response.body stream, so we may
    // need to read the entire body to memory as a Blob.
    var bodyPromise = 'body' in originalResponse ?
      Promise.resolve(originalResponse.body) :
      originalResponse.blob();

    return bodyPromise.then(function(body) {
      // new Response() is happy when passed either a stream or a Blob.
      return new Response(body, {
        headers: originalResponse.headers,
        status: originalResponse.status,
        statusText: originalResponse.statusText
      });
    });
  };

var createCacheKey = function (originalUrl, paramName, paramValue,
                           dontCacheBustUrlsMatching) {
    // Create a new URL object to avoid modifying originalUrl.
    var url = new URL(originalUrl);

    // If dontCacheBustUrlsMatching is not set, or if we don't have a match,
    // then add in the extra cache-busting URL parameter.
    if (!dontCacheBustUrlsMatching ||
        !(url.pathname.match(dontCacheBustUrlsMatching))) {
      url.search += (url.search ? '&' : '') +
        encodeURIComponent(paramName) + '=' + encodeURIComponent(paramValue);
    }

    return url.toString();
  };

var isPathWhitelisted = function (whitelist, absoluteUrlString) {
    // If the whitelist is empty, then consider all URLs to be whitelisted.
    if (whitelist.length === 0) {
      return true;
    }

    // Otherwise compare each path regex to the path of the URL passed in.
    var path = (new URL(absoluteUrlString)).pathname;
    return whitelist.some(function(whitelistedPathRegex) {
      return path.match(whitelistedPathRegex);
    });
  };

var stripIgnoredUrlParameters = function (originalUrl,
    ignoreUrlParametersMatching) {
    var url = new URL(originalUrl);
    // Remove the hash; see https://github.com/GoogleChrome/sw-precache/issues/290
    url.hash = '';

    url.search = url.search.slice(1) // Exclude initial '?'
      .split('&') // Split into an array of 'key=value' strings
      .map(function(kv) {
        return kv.split('='); // Split each 'key=value' string into a [key, value] array
      })
      .filter(function(kv) {
        return ignoreUrlParametersMatching.every(function(ignoredRegex) {
          return !ignoredRegex.test(kv[0]); // Return true iff the key doesn't match any of the regexes.
        });
      })
      .map(function(kv) {
        return kv.join('='); // Join each [key, value] array into a 'key=value' string
      })
      .join('&'); // Join the array of 'key=value' strings into a string with '&' in between each

    return url.toString();
  };


var hashParamName = '_sw-precache';
var urlsToCacheKeys = new Map(
  precacheConfig.map(function(item) {
    var relativeUrl = item[0];
    var hash = item[1];
    var absoluteUrl = new URL(relativeUrl, self.location);
    var cacheKey = createCacheKey(absoluteUrl, hashParamName, hash, false);
    return [absoluteUrl.toString(), cacheKey];
  })
);

function setOfCachedUrls(cache) {
  return cache.keys().then(function(requests) {
    return requests.map(function(request) {
      return request.url;
    });
  }).then(function(urls) {
    return new Set(urls);
  });
}

self.addEventListener('install', function(event) {
  event.waitUntil(
    caches.open(cacheName).then(function(cache) {
      return setOfCachedUrls(cache).then(function(cachedUrls) {
        return Promise.all(
          Array.from(urlsToCacheKeys.values()).map(function(cacheKey) {
            // If we don't have a key matching url in the cache already, add it.
            if (!cachedUrls.has(cacheKey)) {
              var request = new Request(cacheKey, {credentials: 'same-origin'});
              return fetch(request).then(function(response) {
                // Bail out of installation unless we get back a 200 OK for
                // every request.
                if (!response.ok) {
                  throw new Error('Request for ' + cacheKey + ' returned a ' +
                    'response with status ' + response.status);
                }

                return cleanResponse(response).then(function(responseToCache) {
                  return cache.put(cacheKey, responseToCache);
                });
              });
            }
          })
        );
      });
    }).then(function() {
      
      // Force the SW to transition from installing -> active state
      return self.skipWaiting();
      
    })
  );
});

self.addEventListener('activate', function(event) {
  var setOfExpectedUrls = new Set(urlsToCacheKeys.values());

  event.waitUntil(
    caches.open(cacheName).then(function(cache) {
      return cache.keys().then(function(existingRequests) {
        return Promise.all(
          existingRequests.map(function(existingRequest) {
            if (!setOfExpectedUrls.has(existingRequest.url)) {
              return cache.delete(existingRequest);
            }
          })
        );
      });
    }).then(function() {
      
      return self.clients.claim();
      
    })
  );
});


self.addEventListener('fetch', function(event) {
  if (event.request.method === 'GET') {
    // Should we call event.respondWith() inside this fetch event handler?
    // This needs to be determined synchronously, which will give other fetch
    // handlers a chance to handle the request if need be.
    var shouldRespond;

    // First, remove all the ignored parameters and hash fragment, and see if we
    // have that URL in our cache. If so, great! shouldRespond will be true.
    var url = stripIgnoredUrlParameters(event.request.url, ignoreUrlParametersMatching);
    shouldRespond = urlsToCacheKeys.has(url);

    // If shouldRespond is false, check again, this time with 'index.html'
    // (or whatever the directoryIndex option is set to) at the end.
    var directoryIndex = '';
    if (!shouldRespond && directoryIndex) {
      url = addDirectoryIndex(url, directoryIndex);
      shouldRespond = urlsToCacheKeys.has(url);
    }

    // If shouldRespond is still false, check to see if this is a navigation
    // request, and if so, whether the URL matches navigateFallbackWhitelist.
    var navigateFallback = 'index.html';
    if (!shouldRespond &&
        navigateFallback &&
        (event.request.mode === 'navigate') &&
        isPathWhitelisted(["\\/[^\\/\\.]*(\\?|$)"], event.request.url)) {
      url = new URL(navigateFallback, self.location).toString();
      shouldRespond = urlsToCacheKeys.has(url);
    }

    // If shouldRespond was set to true at any point, then call
    // event.respondWith(), using the appropriate cache key.
    if (shouldRespond) {
      event.respondWith(
        caches.open(cacheName).then(function(cache) {
          return cache.match(urlsToCacheKeys.get(url)).then(function(response) {
            if (response) {
              return response;
            }
            throw Error('The cached response that was expected is missing.');
          });
        }).catch(function(e) {
          // Fall back to just fetch()ing the request if some unexpected error
          // prevented the cached response from being valid.
          console.warn('Couldn\'t serve response for "%s" from cache: %O', event.request.url, e);
          return fetch(event.request);
        })
      );
    }
  }
});







