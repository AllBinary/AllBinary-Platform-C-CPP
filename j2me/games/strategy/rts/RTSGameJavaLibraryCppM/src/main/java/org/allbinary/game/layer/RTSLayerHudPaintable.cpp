
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayer.h"

class RTSLayerHudPaintable: public SelectionHudPaintable, public UpdateMyFontInterface {

    private: static RTSLayerHudPaintable* instance() { static std::unique_ptr<RTSLayerHudPaintable> value(new RTSLayerHudPaintable()); return value.get(); }

    public: static RTSLayerHudPaintable* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayerHudPaintable::instance();
    
}


    private: std::vector<std::string> weaponProperties = StringUtil::getInstance()->getArrayInstance();

    private: CollidableDestroyableDamageableLayer* rtsLayer = CollidableDestroyableDamageableLayer::getNullInstance();

    protected: int32_t costY= 0;

    protected: int32_t costY1= 0;

    private: int32_t fontHeight= 0;

private: RTSLayerHudPaintable(){
}


    public: void updateMeasurement(Graphics* graphics){
super.updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->costY1= (this->y +((this->weaponProperties.size() +1) *this->fontHeight));
    

                        if(!AndroidUtil::isAndroid())
                        
                                    {
                                    this->costY= this->costY1;
    

                                    }
                                
                        else {
                            this->costY= (this->y +((this->weaponProperties.size() +2) *this->fontHeight));
    

                        }
                            
}


    public: void updateSelectionInfo(){
this->setName(this->getRtsLayer()->getName());
    

    BasicWeaponPart* partInterface = dynamic_cast<BasicWeaponPart*>(this->getRtsLayer()->getPartInterfaceArray()[0]);;
    
this->weaponProperties= partInterface->getWeaponProperties()->toStringArray();
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    public: void paint(Graphics* graphics){
super.paint(graphics);
    

    int32_t size = this->weaponProperties.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphics->drawString(this->weaponProperties[index], this->textX, this->y +((index +1) *this->fontHeight), 0);
    
}

}


    public: void setRtsLayer(RTSLayer* rtsLayer){
this->rtsLayer= rtsLayer;
    
}


    private: CollidableDestroyableDamageableLayer* getRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayer;
    
}


};

            

