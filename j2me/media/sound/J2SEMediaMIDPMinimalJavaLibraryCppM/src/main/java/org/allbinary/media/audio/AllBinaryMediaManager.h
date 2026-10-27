
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/BufferedInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
class Manager;
class MediaException;
class Player;
class TsUtil;
class AudioContentTypeDataFactory;
class ResourceUtil;
class Features;
class GameFeatureFactory;
class ProgressCanvasFactory;
class NullUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Sounds;
class SoundsFactoryInterface;
class NoPlayer;
class PCClipWavPlayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //J2SEMediaMIDPMinimalJavaLibrary
class AllBinaryMediaManager
            : public virtual Object
         {

    private: static inline const std::string THIS = "AllBinaryMediaManagerPC";

    public: static bool isMuted();

    public: static void setMuted(bool aMuted);

    public: static bool update();

                //@Throws(Exception.constructor)
            
    public: static void init(SoundsFactoryInterface* soundsFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: static void shutdown(SoundsFactoryInterface* soundsFactoryInterface);

    private: static inline const std::string CREATE_PLAYER = "createPlayer";

                //@Throws(Exception.constructor)
            
    public: static Player* createPlayer(std::string resource);

                //@Throws(IOException.constructor, MediaException.constructor)
            
    public: static Player* createPlayerFromInputStream(InputStream* stream, std::string type);

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void playTone(int32_t frequency, int32_t time, int32_t volume);

    public: static bool isInitialized();

private: AllBinaryMediaManager();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H_COMPLETE
        #if __has_include(<java/io/BufferedInputStream.h>)
#include <java/io/BufferedInputStream.h>
#endif
#if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/media/Manager.h>)
#include <javax/microedition/media/Manager.h>
#endif
#if __has_include(<javax/microedition/media/MediaException.h>)
#include <javax/microedition/media/MediaException.h>
#endif
#if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/audio/AudioContentTypeDataFactory.h>)
#include <org/allbinary/audio/AudioContentTypeDataFactory.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/audio/Sounds.h")
#include "org/allbinary/media/audio/Sounds.h"
#endif
#if __has_include("org/allbinary/media/audio/SoundsFactoryInterface.h")
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#endif
#if __has_include("org/allbinary/media/audio/NoPlayer.h")
#include "org/allbinary/media/audio/NoPlayer.h"
#endif
#if __has_include("org/allbinary/media/audio/PCClipWavPlayer.h")
#include "org/allbinary/media/audio/PCClipWavPlayer.h"
#endif

        #endif
    
