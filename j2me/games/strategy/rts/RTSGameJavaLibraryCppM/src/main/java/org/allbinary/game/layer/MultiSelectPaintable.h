
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_MULTISELECTPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_MULTISELECTPAINTABLE_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectionHudPaintable.h"
#include "RTSLayer.h"

class MultiSelectPaintable: public SelectionHudPaintable {
        

    private: const rootNameList: BasicArrayList = new BasicArrayListD();

    private: totalCharArray: std::vector<char> = NullUtil.getInstance()!.NULL_CHAR_ARRAY;

    private: rootNamesString: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const TOTAL: string = "Total Selected: ";

    private: const backgroundColor: int32_t = BasicColorFactory.getInstance()!.GREY.intValue()!;

    private: totalWidth: int32_t= 0;

    private: textLine2Y: int32_t= 0;

public constructor ();

    public updateMeasurement(Graphics graphics);

    public update(BasicArrayList list);

    clear();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_MULTISELECTPAINTABLE_H
