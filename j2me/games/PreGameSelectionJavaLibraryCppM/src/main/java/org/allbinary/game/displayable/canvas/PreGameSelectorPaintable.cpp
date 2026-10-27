
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

class PreGameSelectorPaintable: public InitUpdatePaintable {

    private: std::string title;

    private: CanvasDrawLineString* canvasDrawLineString;

    private: PreGameScrollSelectionForm* preGameScrollSelectionForm;

public: PreGameSelectorPaintable(std::string title, PreGameScrollSelectionForm* preGameScrollSelectionForm){
this->title= title;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->canvasDrawLineString= new CanvasDrawLineString(displayInfo->getLastHalfWidth(), 0);
    
this->preGameScrollSelectionForm= preGameScrollSelectionForm;
    
}


    public: void update(){

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->canvasDrawLineString= new CanvasDrawLineString(displayInfo->getLastHalfWidth(), 0);
    
}


    public: void paint(Graphics* graphics){
graphics->setColor(BasicColorFactory::getInstance()->WHITE.intValue());
    
this->canvasDrawLineString->paint(graphics, title, 0);
    
this->getPreGameSelectionForm()->paint(graphics);
    
}


    public: PreGameScrollSelectionForm* getPreGameSelectionForm(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->preGameScrollSelectionForm;
    
}


};

            

