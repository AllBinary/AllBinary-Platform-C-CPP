
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/ItemStateListener.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/configuration/GameOptionsForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeatureFactory.h"
#include "GameFeature.h"
#include "GameFeatureUtil.h"

class GameFeatureItemStateListener
            : public Object
        : public ItemStateListener {
        

    private: static toggleList: BasicArrayList = new BasicArrayListD();

    public static add(GameFeature gameFeature){

                        if(!GameFeatureItemStateListener.toggleList!.contains(gameFeature))
                        
                                    {
                                    GameFeatureItemStateListener.toggleList!.add(gameFeature);
    

                                    }
                                
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: gameOptionsForm: GameOptionsForm;

public constructor (GameOptionsForm gameOptionsForm){

            super();
        this.gameOptionsForm= gameOptionsForm;
    

    gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;;
    
GameFeatureItemStateListener.add(gameFeatureFactory!.ARTIFICIAL_INTELLEGENCE_PROCESSOR);
    
GameFeatureItemStateListener.add(gameFeatureFactory!.COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
    
GameFeatureItemStateListener.add(gameFeatureFactory!.DAMAGE_FLOATERS);
    
GameFeatureItemStateListener.add(gameFeatureFactory!.DROPPED_ITEMS);
    
GameFeatureItemStateListener.add(gameFeatureFactory!.GAME_INPUT_LAYER_PROCESSOR);
    
GameFeatureItemStateListener.add(gameFeatureFactory!.HEALTH_BARS);
    
GameFeatureItemStateListener.add(gameFeatureFactory!.SOUND);
    
GameFeatureItemStateListener.add(gameFeatureFactory!.TICKABLE_LAYER_PROCESSOR);
    
}


    public itemStateChanged(Item item){

        try {
            
    itemLabel: string = item.getLabel()!;;
    
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.ITEM_LABEL)!.append(itemLabel)!.toString(), this, "itemStateChanged");
    

                        if(item instanceof GameConfigurationGauge)
                        
                                    {
                                    GameConfigurationUtil.getInstance()!.change(this.gameOptionsForm, item as GameConfigurationGauge);
    

                                    }
                                
                             else 
                        if(item instanceof ChoiceGroup)
                        
                                    {
                                    
    gameFeatureUtil: GameFeatureUtil = GameFeatureUtil.getInstance()!;;
    

                        if(gameFeatureUtil!.isExclusive(itemLabel))
                        
                                    {
                                    gameFeatureUtil!.updateExclusiveForChoiceGroup(item as ChoiceGroup);
    

                                    }
                                
                        else {
                            gameFeatureUtil!.updateMultiple(item as ChoiceGroup);
    

                        }
                            

                                    }
                                

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "itemStateChanged", e);
    
}

}


};

            

