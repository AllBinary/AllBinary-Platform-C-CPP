
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_COLOR_BACKGROUND_BACKGROUNDCOLORDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_COLOR_BACKGROUND_BACKGROUNDCOLORDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BackgroundColorData
            : public Object
         {

    private: static BackgroundColorData* instance() { static std::unique_ptr<BackgroundColorData> value(new BackgroundColorData()); return value.get(); }

    public: static BackgroundColorData* getInstance();

private: BackgroundColorData();

    public: const std::string VALUE = "background-color";

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_COLOR_BACKGROUND_BACKGROUNDCOLORDATA_H
