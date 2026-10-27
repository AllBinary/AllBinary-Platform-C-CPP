
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/Sounds.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/SoundStrings.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#include "org/allbinary/media/audio/Sound.h"


Sounds::Sounds(SoundsFactoryInterface* soundsFactoryInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), soundStrings(SoundStrings::getInstance()){
this->soundsFactoryInterface= soundsFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto Sounds::init() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->INIT);
    

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    
this->soundsFactoryInterface->init();
    

    std::vector<Sound*> soundInterfaceArray = this->soundsFactoryInterface->getSoundInterfaceArray();;
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    int32_t indexInteger;;
    

    std::string indexString;;
    

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t i = 0;i < soundInterfaceArray.size(); i++)
        {

    Sound* soundInterface = soundInterfaceArray[i];;
    

                        if(soundInterface != 
                                    nullptr
                                )
                        
                                    {
                                    indexInteger= smallIntegerSingletonFactory->getAt(i);
    
indexString= indexInteger.toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(commonLabels->INDEX_LABEL);
    
stringBuffer->append(indexString);
    
stringBuffer->append(this->soundStrings->SOUND);
    
stringBuffer->append(soundInterface->getClass()->getName());
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->INIT);
    
soundInterface->init();
    
progressCanvas->addNormalPortion(100, (new StringMaker())->append(this->soundStrings->INIT_SOUND)->append(indexString)->toString());
    

                                    }
                                
}

this->soundsFactoryInterface->setInitialized(true);
    
this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->INIT);
    
}


                //@Throws(Exception.constructor)
            
    auto Sounds::stopAll() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->soundStrings->STOP_ALL);
    

    std::vector<Sound*> soundInterfaceArray = this->soundsFactoryInterface->getSoundInterfaceArray();;
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Player* player;;
    




                        for (
    int32_t index = 0;index < soundInterfaceArray.size(); index++)
        {

                        if(soundInterfaceArray[index] != 
                                    nullptr
                                )
                        
                                    {
                                    player= soundInterfaceArray[index]->getPlayerP();
    

                        if(player != 
                                    nullptr
                                )
                        
                                    {
                                    player->stop();
    
progressCanvas->addPortion(100, this->soundStrings->STOPPING_SOUND, index);
    

                                    }
                                

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto Sounds::closeAll() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->soundStrings->CLOSE_ALL);
    

    std::vector<Sound*> soundInterfaceArray = this->soundsFactoryInterface->getSoundInterfaceArray();;
    

    ProgressCanvas* progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Player* player;;
    




                        for (
    int32_t index = 0;index < soundInterfaceArray.size(); index++)
        {

                        if(soundInterfaceArray[index] != 
                                    nullptr
                                )
                        
                                    {
                                    player= soundInterfaceArray[index]->getPlayerP();
    

                        if(player != 
                                    nullptr
                                )
                        
                                    {
                                    player->close();
    
progressCanvas->addPortion(100, this->soundStrings->CLOSING_SOUND, index);
    

                                    }
                                

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_CPP
