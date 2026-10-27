
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_COLOR_BACKGROUND_BACKGROUNDCOLORDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_COLOR_BACKGROUND_BACKGROUNDCOLORDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/style/css/property/color/background/BackgroundColorData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto BackgroundColorData::instance_owner() -> BackgroundColorData* { static std::unique_ptr<BackgroundColorData> value(new BackgroundColorData()); return value.get(); }
BackgroundColorData* BackgroundColorData::instance = BackgroundColorData::instance_owner();

    auto BackgroundColorData::getInstance() -> BackgroundColorData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BackgroundColorData::instance;
    
}


BackgroundColorData::BackgroundColorData(){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_COLOR_BACKGROUND_BACKGROUNDCOLORDATA_CPP
