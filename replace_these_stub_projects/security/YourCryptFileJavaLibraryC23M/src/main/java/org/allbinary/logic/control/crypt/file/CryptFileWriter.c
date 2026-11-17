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
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/w3c/dom/Document.h"

typedef struct CryptFileWriter CryptFileWriter;
struct CryptFileWriter {
    char unused;
};


CryptFileWriter* CryptFileWriter_new(const char* decryptedExtension, const char* encryptedExtension);

void CryptFileWriter_init(CryptFileWriter* this, const char* decryptedExtension, const char* encryptedExtension);
void CryptFileWriter_write(CryptFileWriter* this, AbPath* fileAbPath, Document* document);


void CryptFileWriter_init(CryptFileWriter* this, const char* decryptedExtension, const char* encryptedExtension) {
}

CryptFileWriter* CryptFileWriter_new(const char* decryptedExtension, const char* encryptedExtension) {
    CryptFileWriter* this = calloc(1, sizeof(CryptFileWriter));
    CryptFileWriter_init(this, decryptedExtension, encryptedExtension);
    return this;
}


// throws Exception
void CryptFileWriter_write(CryptFileWriter* this, AbPath* fileAbPath, Document* document) {
}

