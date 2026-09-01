
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPTIONRESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_CAPTIONRESOURCES_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CaptionResources
            : public Object
         {

    private: static CaptionResources instance() { return CaptionResources(); }

    public: static CaptionResources getInstance();

private: CaptionResources();

    public: const std::string RESOURCE = "/unit_message_bubbled_box.png";

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_CAPTIONRESOURCES_H
