
# EssentialLibs


The widely-used [Boost Project](https://github.com/boostorg/boost) and [Open SSL](https://github.com/openssl/openssl) C++ libraries built and compiled for iOS and MacOS with extra features.

Why? It is time-consuming to build these on your apart from the troubleshooting you may need to go trough to get them compile right. <br/> <br/>
I use them for my current projects. Any other architecture you wanna see, create an issue and let me know.


## Built Architectures
- Boost (1.79.0)
	- macOS (x86_64)
	- iOS (arm64, armv7, armv7s) | <b>Including -mt (thread-safe) libraries!</b> such as coroutine-mt and thread-mt
	- Mac-Catalyst (x86_64, arm64)

- OpenSSL (3.0.5)
	- macOS (x86_64)
	- iOS (arm64, armv7, armv7s)

## Setup Boost for iOS / macOS
Include headers at <b>EssentialLibs/Boost</b> <br/>
Link to libraries located at <b>EssentialLibs/Boost/stage/{ios/macosx/catalyst}/lib</b> <br/>

### CmakeLists.txt
    INCLUDE_DIRECTORIES(/pathToEssentialLibs/boost)
    LINK_DIRECTORIES(/pathToEssentialLibs/boost/stage/{ios/macosx/catalyst}/lib)
    
    file(GLOB LIBRARIES "/pathToEssentialLibs/boost/stage/{ios/macosx/catalyst}/lib/*.a")
    message("LIBRARIES = ${LIBRARIES}")

    TARGET_LINK_LIBRARIES(projectName ${LIBRARIES})
    
### QT Creator .pro file
    USER_PATH = /Users/alberto
    
    INCLUDEPATH += "$${USER_PATH}/EssentialLibs/boost"
    LIBS += -L"$${USER_PATH}/EssentialLibs/boost/stage/ios/lib"
    LIBS += -lboost_system -lboost_thread -lboost_filesystem -lboost_context -lboost_coroutine-mt # add or remove depending on your needs

## Setup OpenSSL for iOS / macOS
Include headers at <b>EssentialLibs/OpenSSL/{iphoneos/macosx}/include</b> <br/>
Link to libraries located at <b>EssentialLibs/OpenSSL/{iphoneos/macosx}/lib</b> <br/>

### CmakeLists.txt
    INCLUDE_DIRECTORIES(/pathToEssentialLibs/OpenSSL/{iphoneos/macosx}/include)
    LINK_DIRECTORIES(/pathToEssentialLibs/OpenSSL/{iphoneos/macosx}/lib)
    
    file(GLOB LIBRARIES "/pathToEssentialLibs/OpenSSL/{iphoneos/macosx}/lib/*.a")
    message("LIBRARIES = ${LIBRARIES}")

    TARGET_LINK_LIBRARIES(projectName ${LIBRARIES})
    
### QT Creator .pro file
    USER_PATH = /Users/alberto
    
    INCLUDEPATH += "$${USER_PATH}/EssentialLibs/OpenSSL/{iphoneos/macosx}/include/"
    LIBS += -L$${USER_PATH}/EssentialLibs/OpenSSL/{iphoneos/macosx}/lib
    LIBS += -lssl -lcrypto

## Issues
Please open a issue and explain as most as possible
#
## Cookie?
If it worked out for you, consider giving a star and following me, for future updates and newer repos!

# Sponsorship
This project is tested with [BrowserStack](https://www.browserstack.com/app-live).
Test EssentialLibs in your native app, trough their real movile devices!
