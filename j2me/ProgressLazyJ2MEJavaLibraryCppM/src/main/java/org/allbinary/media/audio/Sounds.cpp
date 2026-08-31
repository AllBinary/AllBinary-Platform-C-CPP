
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SoundStrings.h"
#include "SoundsFactoryInterface.h"
#include "Sound.h"

class Sounds
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const soundStrings: SoundStrings = SoundStrings.getInstance()!;

    private: const soundsFactoryInterface: SoundsFactoryInterface;

public constructor (SoundsFactoryInterface soundsFactoryInterface){

            super();
        this.soundsFactoryInterface= soundsFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public init(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.INIT);
    

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
this.soundsFactoryInterface!.init();
    

    soundInterfaceArray: std::vector<Sound> = this.soundsFactoryInterface!.getSoundInterfaceArray()!;;
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    indexInteger: Integer;;
    

    indexString: string;;
    

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    i: int32_t = 0;i < soundInterfaceArray!.length; i++)
        {

    soundInterface: Sound = soundInterfaceArray[i]!;;
    

                        if(soundInterface != 
                                    null
                                )
                        
                                    {
                                    indexInteger= smallIntegerSingletonFactory!.getAt(i);
    
indexString= indexInteger!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(commonLabels!.INDEX_LABEL);
    
stringBuffer!.append(indexString);
    
stringBuffer!.append(this.soundStrings!.SOUND);
    
stringBuffer!.append(soundInterface!.constructor.name.toString()!);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.INIT);
    
soundInterface!.init();
    
progressCanvas!.addNormalPortion(100, new StringMaker().append(this.soundStrings!.INIT_SOUND)!.append(indexString)!.toString());
    

                                    }
                                
}

this.soundsFactoryInterface!.setInitialized(true);
    
this.logUtil!.putF(this.commonStrings!.END, this, this.commonStrings!.INIT);
    
}


                //@Throws(Exception.constructor)
            
    public stopAll(){
this.logUtil!.putF(this.commonStrings!.START, this, this.soundStrings!.STOP_ALL);
    

    soundInterfaceArray: std::vector<Sound> = this.soundsFactoryInterface!.getSoundInterfaceArray()!;;
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    

    player: Player;;
    




                        for (
    index: int32_t = 0;index < soundInterfaceArray!.length; index++)
        {

                        if(soundInterfaceArray[index] != 
                                    null
                                )
                        
                                    {
                                    player= soundInterfaceArray[index]!.getPlayerP();
    

                        if(player != 
                                    null
                                )
                        
                                    {
                                    player.stop();
    
progressCanvas!.addPortion(100, this.soundStrings!.STOPPING_SOUND, index);
    

                                    }
                                

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public closeAll(){
this.logUtil!.putF(this.commonStrings!.START, this, this.soundStrings!.CLOSE_ALL);
    

    soundInterfaceArray: std::vector<Sound> = this.soundsFactoryInterface!.getSoundInterfaceArray()!;;
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    

    player: Player;;
    




                        for (
    index: int32_t = 0;index < soundInterfaceArray!.length; index++)
        {

                        if(soundInterfaceArray[index] != 
                                    null
                                )
                        
                                    {
                                    player= soundInterfaceArray[index]!.getPlayerP();
    

                        if(player != 
                                    null
                                )
                        
                                    {
                                    player.close();
    
progressCanvas!.addPortion(100, this.soundStrings!.CLOSING_SOUND, index);
    

                                    }
                                

                                    }
                                
}

}


};

            

