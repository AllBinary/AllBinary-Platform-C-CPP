
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
        



        #ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Rectangle;
class StringUtil;
class ViewPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
class AllBinaryLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryLayerFactory
            : public virtual Object
        , public AllBinaryLayerFactoryInterface {

    private: Rectangle* rectangle;

public: AllBinaryLayerFactory(Rectangle* rectangle);

    public: AllBinaryLayer* getInstance();

};

            


        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/view/ViewPosition.h>)
#include <org/allbinary/view/ViewPosition.h>
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayerFactoryInterface.h")
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

        #endif
    
