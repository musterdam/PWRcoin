#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning
//

#define BUILD_DATE "2018-04-25 08:29:53 +0200"

// These need to be macros, as version.cpp's and pwrcoin-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       2
#define CLIENT_VERSION_MINOR       0
#define CLIENT_VERSION_REVISION    1
#define CLIENT_VERSION_BUILD       0

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

#endif // CLIENTVERSION_H
