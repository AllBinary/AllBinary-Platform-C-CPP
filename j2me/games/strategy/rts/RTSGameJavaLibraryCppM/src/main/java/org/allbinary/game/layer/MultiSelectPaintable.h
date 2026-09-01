
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

            #include <vector>
        
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

    private: const BasicArrayList rootNameList = BasicArrayListD();

    private: std::vector<char> totalCharArray = NullUtil::getInstance().NULL_CHAR_ARRAY;

    private: std::string rootNamesString = StringUtil::getInstance().EMPTY_STRING;

    private: const std::string TOTAL = "Total Selected: ";

    private: const int32_t backgroundColor = BasicColorFactory::getInstance().GREY.intValue();

    private: int32_t totalWidth= 0;

    private: int32_t textLine2Y= 0;

public: MultiSelectPaintable();

    public: void updateMeasurement(Graphics graphics);

    public: void update(BasicArrayList list);

    private: void clear();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_MULTISELECTPAINTABLE_H
