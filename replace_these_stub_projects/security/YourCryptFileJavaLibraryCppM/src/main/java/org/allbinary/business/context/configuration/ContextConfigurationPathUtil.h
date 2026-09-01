
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONPATHUTIL_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONPATHUTIL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ContextConfigurationPathUtil
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static AbFile getAbFile(std::string contextName);

                //@Throws(Exception.constructor)
            
    public: static AbPath getAbPath(std::string contextName);

                //@Throws(Exception.constructor)
            
    private: static std::string getPath();

    private: static std::string getFileName(std::string contextName);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONPATHUTIL_H
