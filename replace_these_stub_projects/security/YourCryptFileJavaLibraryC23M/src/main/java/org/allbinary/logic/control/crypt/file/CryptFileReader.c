// Generated Code Do Not Modify
// package org.allbinary.logic.control.crypt.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct CryptFileReader CryptFileReader;
struct CryptFileReader {
    char unused;
};


CryptFileReader* CryptFileReader_new(const char* decryptedExtension, const char* encryptedExtension);

void CryptFileReader_init(CryptFileReader* this, const char* decryptedExtension, const char* encryptedExtension);
const char* CryptFileReader_get(CryptFileReader* this, AbPath* fileAbPath);
InputStream* CryptFileReader_getInputStream(CryptFileReader* this, AbPath* fileAbPath);


void CryptFileReader_init(CryptFileReader* this, const char* decryptedExtension, const char* encryptedExtension) {
}

CryptFileReader* CryptFileReader_new(const char* decryptedExtension, const char* encryptedExtension) {
    CryptFileReader* this = calloc(1, sizeof(CryptFileReader));
    CryptFileReader_init(this, decryptedExtension, encryptedExtension);
    return this;
}


// throws Exception
const char* CryptFileReader_get(CryptFileReader* this, AbPath* fileAbPath) {
        return nullptr;
}


// throws Exception
InputStream* CryptFileReader_getInputStream(CryptFileReader* this, AbPath* fileAbPath) {
        return nullptr;
}

