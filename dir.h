//
//  dir.h
//  Dir
//
//  Created by Akash Rajendra on 10/07/20.
//

#include <string>
#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#endif

namespace Dir {
    int make(std::string dirPath, unsigned int mode = 0775) {
#ifdef _WIN32
        // Add windows specific code lol
        return _mkdir(dirPath.c_str());
#else
        return mkdir(dirPath.c_str(), mode);
#endif
    };
}
