
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESELECTORPAINTABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESELECTORPAINTABLE_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/draw/CanvasDrawLineString.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PreGameScrollSelectionForm.h"

class PreGameSelectorPaintable: public InitUpdatePaintable {

    private: std::string title;

    private: CanvasDrawLineString canvasDrawLineString;

    private: PreGameScrollSelectionForm preGameScrollSelectionForm;

public: PreGameSelectorPaintable(std::string title, PreGameScrollSelectionForm preGameScrollSelectionForm);

    public: void update();

    public: void paint(Graphics graphics);

    public: PreGameScrollSelectionForm getPreGameSelectionForm();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMESELECTORPAINTABLE_H
