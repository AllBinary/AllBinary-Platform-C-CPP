
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AbPath;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InitInfoInterface
            : public virtual Object
         {

    public: virtual bool isTesting() = 0;

    public: virtual std::string getTesting() = 0;

    public: virtual std::string getTestHtmlPath() = 0;

    public: virtual std::string getMainPath() = 0;

    public: virtual void setTesting(std::string value) = 0;

    public: virtual void setTestHtmlPath(AbPath* value) = 0;

    public: virtual void setMainPath(AbPath* value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isTestingValid(std::string testing) = 0;

    public: virtual bool isTestHtmlPathValid(AbPath* value) = 0;

    public: virtual bool isMainPathValid(AbPath* value) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif

        #endif
    
