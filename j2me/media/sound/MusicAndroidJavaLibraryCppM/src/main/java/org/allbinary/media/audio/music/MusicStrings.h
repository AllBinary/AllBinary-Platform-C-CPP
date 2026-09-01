
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICSTRINGS_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICSTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MusicStrings
            : public Object
         {

    private: static MusicStrings instance() { return MusicStrings(); }

    public: static MusicStrings getInstance();

    public: const std::string SONG_EXTRA = "SONG";

    public: const std::string LEFT_VOLUME = "LEFT_VOLUME";

    public: const std::string RIGHT_VOLUME = "RIGHT_VOLUME";

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICSTRINGS_H
