
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AbPath;
class AbeClientInformationInterface;
class TransformInfoInterface;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TransformInfoObjectConfigInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoObjectConfigAndManipulatorFactoryInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#endif

        #endif
    
