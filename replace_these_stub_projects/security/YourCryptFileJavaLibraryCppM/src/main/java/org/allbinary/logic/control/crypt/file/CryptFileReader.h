
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CryptFileReader
            : public Object
         {

public: CryptFileReader(std::string decryptedExtension, std::string encryptedExtension);

                //@Throws(Exception.constructor)
            
    public: std::string get(AbPath* fileAbPath);

                //@Throws(Exception.constructor)
            
    public: InputStream* getInputStream(AbPath* fileAbPath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_FILE_CRYPTFILEREADER_H
