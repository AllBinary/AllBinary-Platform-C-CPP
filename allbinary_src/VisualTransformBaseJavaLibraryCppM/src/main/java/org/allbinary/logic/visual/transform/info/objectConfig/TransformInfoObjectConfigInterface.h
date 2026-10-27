
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
class TransformInfoInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoObjectConfigInterface: public DomDocumentMappingInterface {

    public: virtual bool containsView(TransformInfoInterface* transformInfoInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getName() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getTransformsGroup(std::string group) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getTransforms() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getParentTransforms() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getGroupTransforms() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getOutputTypeName() = 0;

    public: virtual void setOutputTypeName(std::string value) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getInputOutputTypeName() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getInputOutputTypeFile() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string getImportUriPath() = 0;

    public: virtual std::string toString() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>)
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif

        #endif
    
