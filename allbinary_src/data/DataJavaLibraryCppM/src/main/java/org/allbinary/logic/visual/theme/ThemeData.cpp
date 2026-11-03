
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/theme/ThemeData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ThemeData::instance_owner() -> ThemeData* { static std::unique_ptr<ThemeData> value(new ThemeData()); return value.get(); }
ThemeData* ThemeData::instance = ThemeData::instance_owner();

    auto ThemeData::getInstance() -> ThemeData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ThemeData::instance;
    
}


ThemeData::ThemeData(){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEDATA_CPP
