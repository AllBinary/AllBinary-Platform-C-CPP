
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class AbPath;
class AbeClientInformationInterface;
class TransformInfoInterface;
class CommonStrings;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryInterface.h"
class TransformInfoObjectConfigInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoObjectConfigAndManipulatorFactoryBase
            : public virtual Object
        , public TransformInfoObjectConfigAndManipulatorFactoryInterface {


            
    public: TransformInfoObjectConfigAndManipulatorFactoryBase();
        
    /*protected*/ public: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYBASE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryInterface.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#endif

        #endif
    
