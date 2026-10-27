
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
        



        #ifndef ORG_ALLBINARY_VIEW_VIEWPOSITION_H
        #define ORG_ALLBINARY_VIEW_VIEWPOSITION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/ViewPositionBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ViewPosition: public ViewPositionBase {

    public: static ViewPosition* getInstanceD();

    private: AllBinaryLayer* allbinaryLayer;

/*protected*/ public: ViewPosition(int32_t x, int32_t y, int32_t z);

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

    public: int32_t getX2();

    public: int32_t getY2();

    public: int32_t getZ2();

    public: void setAllbinaryLayer(Object* allbinaryLayer);
    public: void setAllbinaryLayer(const std::string& allbinaryLayer) { return setAllbinaryLayer(JavaString::box(allbinaryLayer)); }

};

            


        #endif //ORG_ALLBINARY_VIEW_VIEWPOSITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_VIEW_VIEWPOSITION_H_COMPLETE)
        #define ORG_ALLBINARY_VIEW_VIEWPOSITION_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/view/ViewPositionBase.h")
#include "org/allbinary/view/ViewPositionBase.h"
#endif

        #endif
    
