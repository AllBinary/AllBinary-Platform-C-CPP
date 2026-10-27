
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AbPath;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CryptFileWriter
            : public virtual Object
         {

public: CryptFileWriter(std::string decryptedExtension, std::string encryptedExtension);

                //@Throws(Exception.constructor)
            
    public: void write(AbPath* fileAbPath, Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEWRITER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
