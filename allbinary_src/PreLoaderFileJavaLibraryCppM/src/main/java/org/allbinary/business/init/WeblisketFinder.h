
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_WEBLISKETFINDER_H
        #define ORG_ALLBINARY_BUSINESS_INIT_WEBLISKETFINDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
class LogUtil;
class LogConfigTypeFactory;
class LogConfigTypes;
class AbFile;
class SubDirectory;
class StringUtil;
class CommonStrings;
class BasicArrayList;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WeblisketFinder
            : public virtual Object
         {

    private: static WeblisketFinder* instance_owner();
    private: static WeblisketFinder* instance;

    public: static WeblisketFinder* getInstance();

    private: static inline const std::string KEY = "installerdata.dat";

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: SubDirectory* subDirectory;

private: WeblisketFinder();

    public: BasicArrayList* findAll(std::string path);

    public: std::string getInstallationPath(AbFile* file);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_WEBLISKETFINDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_WEBLISKETFINDER_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_WEBLISKETFINDER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/SubDirectory.h>)
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif


        #endif
    
