
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/GameScrollMenuPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorChangeEventHandler.h>

      
#include <org/allbinary/graphics/color/ColorChangeListener.h>

      
#include <org/allbinary/graphics/form/FormPaintable.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/item/ABStringComponent.h>

      
#include <org/allbinary/graphics/form/item/ABTextItem.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/BasicGameDemoPaintable.h"
#include "org/allbinary/game/paint/MainGameDemoStatePaintable.h"


GameScrollMenuPaintable::GameScrollMenuPaintable(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor) : BasicGameDemoPaintable(mainDemoStatePaintable, ownershipPaintable, helpPaintableInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setColor(basicColor);
    
ColorChangeEventHandler::getInstance()->addListenerInterface(this);
    
}


    auto GameScrollMenuPaintable::setState(int32_t state) -> void{
this->setCurrentStatePaintable(this->getMainDemoStatePaintable());
    
}


    auto GameScrollMenuPaintable::onEvent(AllBinaryEventObject* eventObject) -> void{
}


    auto GameScrollMenuPaintable::setColor(BasicColor* basicColor) -> void{

    MainGameDemoStatePaintable* mainGameDemoStatePaintable = dynamic_cast<MainGameDemoStatePaintable*>(this->getMainDemoStatePaintable());;
    

    FormPaintable* formPaintable = dynamic_cast<FormPaintable*>(mainGameDemoStatePaintable->getMenuPaintableInterface());;
    

    ScrollSelectionForm* scrollSelectionForm = dynamic_cast<ScrollSelectionForm*>(formPaintable->getForm());;
    
mainGameDemoStatePaintable->getOwnershipPaintableInterface()->setBasicColorP(basicColor);
    
scrollSelectionForm->setButtonBasicColor(basicColor);
    

    ABTextItem* item;;
    

    ABStringComponent* stringComponent;;
    




                        for (
    int32_t index = scrollSelectionForm->size() -1;index >= 0; index--)
        {
item= dynamic_cast<ABTextItem*>(scrollSelectionForm->get(index));
    
stringComponent= item->getLabelStringComponent();
    

                        if(stringComponent != 
                                    nullptr
                                )
                        
                                    {
                                    stringComponent->setForegroundBasicColor(basicColor);
    

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_CPP
