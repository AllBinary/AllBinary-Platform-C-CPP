
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H

            #include <vector>
        
#include <javax/microedition/media/Control.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlayer.h"
#include "NullControl.h"

class NoPlayer: public BasicPlayer {

    public: static const NoPlayer NO_PLAYER = NoPlayer();

public: NoPlayer();

    public: void close();

    public: std::string getContentType();

    public: Control getControl(std::string controlType);

    public: std::vector<Control> getControls();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H
