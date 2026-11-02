
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
        



        #ifndef ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H
        #define ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ViewPositionBase: public GPoint {

    private: static ViewPositionBase* NULL_VIEW_POSITION_owner();
    public: static ViewPositionBase* NULL_VIEW_POSITION;

/*protected*/ public: ViewPositionBase(int32_t x, int32_t y, int32_t z);

    public: int32_t getX2();

    public: int32_t getY2();

    public: int32_t getZ2();

    public: void setAllbinaryLayer(Object* allbinaryLayer);
    public: void setAllbinaryLayer(const std::string& allbinaryLayer) { return setAllbinaryLayer(JavaString::box(allbinaryLayer)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void setAllbinaryLayer(BoxValue allbinaryLayer) { return setAllbinaryLayer(JavaBoxes::toObject(allbinaryLayer)); }

};

            


        #endif //ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H_COMPLETE)
        #define ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif

        #endif
    
