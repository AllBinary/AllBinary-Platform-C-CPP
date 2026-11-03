
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/theme/ThemesData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ThemesData::instance_owner() -> ThemesData* { static std::unique_ptr<ThemesData> value(new ThemesData()); return value.get(); }
ThemesData* ThemesData::instance = ThemesData::instance_owner();

    auto ThemesData::getInstance() -> ThemesData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ThemesData::instance;
    
}


ThemesData::ThemesData(){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESDATA_CPP
