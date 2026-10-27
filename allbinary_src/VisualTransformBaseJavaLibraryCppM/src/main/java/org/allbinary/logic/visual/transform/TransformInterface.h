
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
class TransformDocumentInterface;
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInterface: public DomDocumentMappingInterface, public CompositeTransformInfoInterface {

    public: virtual int32_t getTypeId() = 0;

    public: virtual void setTransformDocumentInterface(TransformDocumentInterface* viewDocumentInterface) = 0;

    public: virtual TransformDocumentInterface* getTransformDocumentInterface() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string view() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>)
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>)
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>
#endif

        #endif
    
