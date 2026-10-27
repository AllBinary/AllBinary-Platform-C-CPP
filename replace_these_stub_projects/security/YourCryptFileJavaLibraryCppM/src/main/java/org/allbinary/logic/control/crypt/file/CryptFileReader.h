
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
class AbPath;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CryptFileReader
            : public virtual Object
         {

public: CryptFileReader(std::string decryptedExtension, std::string encryptedExtension);

                //@Throws(Exception.constructor)
            
    public: std::string get(AbPath* fileAbPath);

                //@Throws(Exception.constructor)
            
    public: InputStream* getInputStream(AbPath* fileAbPath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif

        #endif
    
