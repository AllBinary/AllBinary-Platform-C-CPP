
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/PlayerQueue.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/audio/NoSound.h"


PlayerQueue::PlayerQueue(int32_t max) : commonStrings(CommonStrings::getInstance()), list(new BasicArrayListD()){
this->max= max;
    
}


    auto PlayerQueue::add(Sound* sound) -> void{

        try {
            
                        if(!this->list->contains(sound))
                        
                                    {
                                    this->list->add(sound);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
PreLogUtil::put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD);
    
}

}


    auto PlayerQueue::process() -> bool{

    Sound* sound = NoSound::getInstance();;
    

        try {
            
    bool played = false;;
    

                        if(this->list->size() > 0)
                        
                                    {
                                    sound= dynamic_cast<Sound*>(this->list->removeAt(0));
    

                        if(sound != 
                                    nullptr
                                )
                        
                                    {
                                    sound->getPlayerP()->start();
    

                                    }
                                

        while(this->list->size() > this->max)
        {
this->list->removeAt(0);
    
}

played= true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return played;
    

                //: 
} catch(Exception& e) 
            {

    std::string resource = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(sound != 
                                    nullptr
                                )
                        
                                    {
                                    resource= sound->getResource();
    

                                    }
                                
PreLogUtil::put((new StringMaker())->append(this->commonStrings->EXCEPTION_LABEL)->append(resource)->toString(), this, this->commonStrings->PROCESS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto PlayerQueue::clear() -> void{
this->list->clear();
    
}


    auto PlayerQueue::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (new StringMaker())->append(PlayerQueue::TOTAL)->appendint(this->list->size())->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_CPP
