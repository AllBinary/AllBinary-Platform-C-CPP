
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CryptFileWriter
            : public Object
         {

public: CryptFileWriter(std::string decryptedExtension, std::string encryptedExtension);

                //@Throws(Exception.constructor)
            
    public: void write(AbPath fileAbPath, Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H
