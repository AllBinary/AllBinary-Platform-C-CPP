
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESELECTORPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESELECTORPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/draw/CanvasDrawLineString.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/PreGameScrollSelectionForm.h"


PreGameSelectorPaintable::PreGameSelectorPaintable(std::string title, PreGameScrollSelectionForm* preGameScrollSelectionForm){
this->title= title;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->canvasDrawLineString= new CanvasDrawLineString(displayInfo->getLastHalfWidth(), 0);
    
this->preGameScrollSelectionForm= preGameScrollSelectionForm;
    
}


    auto PreGameSelectorPaintable::update() -> void{

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->canvasDrawLineString= new CanvasDrawLineString(displayInfo->getLastHalfWidth(), 0);
    
}


    auto PreGameSelectorPaintable::paint(Graphics* graphics) -> void{
graphics->setColor(BasicColorFactory::getInstance()->WHITE->intValue());
    
this->canvasDrawLineString->paint(graphics, title, 0);
    
this->getPreGameSelectionForm()->paint(graphics);
    
}


    auto PreGameSelectorPaintable::getPreGameSelectionForm() -> PreGameScrollSelectionForm*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->preGameScrollSelectionForm;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESELECTORPAINTABLE_CPP
