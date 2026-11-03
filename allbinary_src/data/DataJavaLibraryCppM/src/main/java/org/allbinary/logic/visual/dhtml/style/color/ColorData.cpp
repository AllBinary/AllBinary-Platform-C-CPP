
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/style/color/ColorData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ColorData::instance_owner() -> ColorData* { static std::unique_ptr<ColorData> value(new ColorData()); return value.get(); }
ColorData* ColorData::instance = ColorData::instance_owner();

    auto ColorData::getInstance() -> ColorData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ColorData::instance;
    
}


ColorData::ColorData(){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORDATA_CPP
