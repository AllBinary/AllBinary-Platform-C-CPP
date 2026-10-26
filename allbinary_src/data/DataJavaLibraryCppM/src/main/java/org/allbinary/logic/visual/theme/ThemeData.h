
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThemeData
            : public Object
         {

    private: static ThemeData instance() { return ThemeData(); }

    public: static ThemeData getInstance();

private: ThemeData();

    public: const std::string NAME = "THEME_NAME";

    public: const std::string PATH = "THEME_PATH";

    public: const std::string PREVIEW_IMAGE_NAME = "THEME_PREVIEW_IMAGE_NAME";

    public: const std::string PREVIEW_IMAGE_PATH = "THEME_PREVIEW_IMAGE_PATH";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEDATA_H
