
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
        



            #include <vector>
        
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
        #include "SoundStrings.h"
#include "SoundsFactoryInterface.h"
#include "Sound.h"

class Sounds
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const SoundStrings soundStrings = SoundStrings::getInstance();

    private: SoundsFactoryInterface soundsFactoryInterface;

public: Sounds(SoundsFactoryInterface soundsFactoryInterface){
this->soundsFactoryInterface= soundsFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.INIT);
    

    CommonLabels commonLabels = CommonLabels::getInstance();;
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
this->soundsFactoryInterface.init();
    

    std::vector<Sound> soundInterfaceArray = this->soundsFactoryInterface.getSoundInterfaceArray();;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    Integer indexInteger;;
    

    std::string indexString;;
    

    StringMaker stringBuffer = StringMaker();;
    




                        for (
    int32_t i = 0;i < soundInterfaceArray.size(); i++)
        {

    Sound soundInterface = soundInterfaceArray[i];;
    

                        if(soundInterface != 
                                    nullptr
                                )
                        
                                    {
                                    indexInteger= smallIntegerSingletonFactory.getAt(i);
    
indexString= indexInteger.toString();
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(commonLabels.INDEX_LABEL);
    
stringBuffer.append(indexString);
    
stringBuffer.append(this->soundStrings.SOUND);
    
stringBuffer.append(soundInterface.constructor.name.toString());
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.INIT);
    
soundInterface.init();
    
progressCanvas.addNormalPortion(100, StringMaker().append(this->soundStrings.INIT_SOUND).append(indexString).toString());
    

                                    }
                                
}

this->soundsFactoryInterface.setInitialized(true);
    
this->logUtil.putF(this->commonStrings.END, this, this->commonStrings.INIT);
    
}


                //@Throws(Exception.constructor)
            
    public: void stopAll(){
this->logUtil.putF(this->commonStrings.START, this, this->soundStrings.STOP_ALL);
    

    std::vector<Sound> soundInterfaceArray = this->soundsFactoryInterface.getSoundInterfaceArray();;
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Player player;;
    




                        for (
    int32_t index = 0;index < soundInterfaceArray.size(); index++)
        {

                        if(soundInterfaceArray[index] != 
                                    nullptr
                                )
                        
                                    {
                                    player= soundInterfaceArray[index].getPlayerP();
    

                        if(player != 
                                    nullptr
                                )
                        
                                    {
                                    player.stop();
    
progressCanvas.addPortion(100, this->soundStrings.STOPPING_SOUND, index);
    

                                    }
                                

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void closeAll(){
this->logUtil.putF(this->commonStrings.START, this, this->soundStrings.CLOSE_ALL);
    

    std::vector<Sound> soundInterfaceArray = this->soundsFactoryInterface.getSoundInterfaceArray();;
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    

    Player player;;
    




                        for (
    int32_t index = 0;index < soundInterfaceArray.size(); index++)
        {

                        if(soundInterfaceArray[index] != 
                                    nullptr
                                )
                        
                                    {
                                    player= soundInterfaceArray[index].getPlayerP();
    

                        if(player != 
                                    nullptr
                                )
                        
                                    {
                                    player.close();
    
progressCanvas.addPortion(100, this->soundStrings.CLOSING_SOUND, index);
    

                                    }
                                

                                    }
                                
}

}


};

            

