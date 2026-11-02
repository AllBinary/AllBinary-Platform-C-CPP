
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESPROCESSOR_H
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameInfo;
class GameInfoData;
class GameConfigurationCentral;
class DisplayInfoSingleton;
class LogUtil;
class XmlRpcAbeClient;
class BooleanFactory;
class NoCrypt;
class AbeClientInformationInterface;
class CommonStrings;
template<typename T1, typename T2> class ABHashtable;
class HashtableUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/remote/RemoteHighScoresProcessorInterface.h"
class RemoteHighScoresData;
class XmlRpcRemoteHighScoresClient;
class RemoteHighScores;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RemoteHighScoresProcessor
            : public virtual Object
        , public RemoteHighScoresProcessorInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: NoCrypt* noCrypt;

public: RemoteHighScoresProcessor();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void process(RemoteHighScores* remoteHighScores, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/GameInfoData.h>)
#include <org/allbinary/game/GameInfoData.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationCentral.h>)
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>)
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>)
#include <org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif
#if __has_include("org/allbinary/game/score/remote/RemoteHighScoresProcessorInterface.h")
#include "org/allbinary/game/score/remote/RemoteHighScoresProcessorInterface.h"
#endif
#if __has_include("org/allbinary/game/score/remote/RemoteHighScoresData.h")
#include "org/allbinary/game/score/remote/RemoteHighScoresData.h"
#endif
#if __has_include("org/allbinary/game/score/remote/XmlRpcRemoteHighScoresClient.h")
#include "org/allbinary/game/score/remote/XmlRpcRemoteHighScoresClient.h"
#endif
#if __has_include("org/allbinary/game/score/remote/RemoteHighScores.h")
#include "org/allbinary/game/score/remote/RemoteHighScores.h"
#endif

        #endif
    
