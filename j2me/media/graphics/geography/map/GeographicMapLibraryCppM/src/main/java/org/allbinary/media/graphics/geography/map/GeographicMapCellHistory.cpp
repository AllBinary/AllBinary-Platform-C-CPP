
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/text/TextAnimation.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPosition.h"
#include "BasicGeographicMap.h"

class GeographicMapCellHistory
            : public Object
        : public UpdateMyFontInterface {
        

    public static const NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY: std::vector<GeographicMapCellHistory> = [];

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const booleanFactory: BooleanFactory = BooleanFactory.getInstance()!;

    private: const list: BasicArrayList;

    private: const visitedList: BasicArrayList;

    private: const MISSED_INFO: string = "Missed";

    private: const animation: Animation = new TextAnimation(this.MISSED_INFO, AnimationBehavior.getInstance());

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: totalVisited: int32_t= 0;

    private: halfWidth: int32_t = 0;

    private: fontHeight: int32_t = 0;

public constructor (){

            super();
        this.list= new BasicArrayListD();
    
this.visitedList= new BasicArrayListD();
    
this.init();
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.fontHeight= font.getHeight();
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public int32_t getTotalVisited(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalVisited;
    
}


    public int32_t getTotalNotVisited(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getSize() -this.totalVisited;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.size();;
    
}


    public trackAll(BasicArrayList list){

    size: int32_t = list.size()!;;
    
this.list.ensureCapacity(size);
    
this.visitedList!.ensureCapacity(size);
    

    geographicMapCellPosition: GeographicMapCellPosition;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
geographicMapCellPosition= list.get(index) as GeographicMapCellPosition;
    
this.track(geographicMapCellPosition);
    
}

}


    public track(GeographicMapCellPosition geographicMapCellPosition){

                        if(!this.list.contains(geographicMapCellPosition))
                        
                                    {
                                    this.list.add(geographicMapCellPosition);
    
this.visitedList!.add(this.booleanFactory!.FALSE);
    

                                    }
                                
}


    public BasicArrayList getTracked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


    public BasicArrayList getVisited(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.visitedList;
    
}


    public GeographicMapCellPosition getAfterIfNotLast(GeographicMapCellPosition geographicMapCellPosition){

    localList: BasicArrayList = this.list;;
    

    index: int32_t = localList!.indexOf(geographicMapCellPosition)!;;
    

                        if(localList!.size() > index +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return localList!.get(index +1) as GeographicMapCellPosition;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPosition;
    
}


    public GeographicMapCellPosition getFirstUnvisited(){

    localList: BasicArrayList = this.list;;
    

    localVisitedList: BasicArrayList = this.visitedList;;
    

    size: int32_t = localVisitedList!.size()!;;
    

    value: Boolean;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
value= this.visitedList!.get(index) as Boolean;
    

                        if(value == this.booleanFactory!.FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return localList!.get(index) as GeographicMapCellPosition;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return localList!.get(0) as GeographicMapCellPosition;
    
}


    public int32_t getFirstUnvisitedIndex(){

    localVisitedList: BasicArrayList = this.visitedList;;
    

    size: int32_t = localVisitedList!.size()!;;
    

    value: Boolean;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
value= this.visitedList!.get(index) as Boolean;
    

                        if(value == this.booleanFactory!.FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public BasicArrayList getInPathButNotTracked(BasicArrayList pathList){

    inPathButNotTrackedList: BasicArrayList = new BasicArrayListD();;
    

    localList: BasicArrayList = this.list;;
    

    size: int32_t = pathList!.size()!;;
    

    geographicMapCellPosition: GeographicMapCellPosition;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
geographicMapCellPosition= pathList!.get(index) as GeographicMapCellPosition;
    

                        if(!localList!.contains(geographicMapCellPosition))
                        
                                    {
                                    inPathButNotTrackedList!.add(geographicMapCellPosition);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inPathButNotTrackedList;
    
}


    public bool isVisited(GeographicMapCellPosition geographicMapCellPosition){

    index: int32_t = this.list.indexOf(geographicMapCellPosition)!;;
    

                        if(index !=  -1)
                        
                                    {
                                    
    value: Boolean = this.visitedList!.get(index) as Boolean;;
    

                        if(value == this.booleanFactory!.TRUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool visit(GeographicMapCellPosition geographicMapCellPosition){

    index: int32_t = this.list.indexOf(geographicMapCellPosition)!;;
    

    value: Boolean;;
    

                        if(index !=  -1)
                        
                                    {
                                    value= this.visitedList!.get(index) as Boolean;
    

    TRUE: Boolean = this.booleanFactory!.TRUE;;
    

                        if(value != TRUE)
                        
                                    {
                                    this.visitedList!.set(index, TRUE);
    
this.totalVisited++;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public bool isAllVisited(){

                        if(this.totalVisited == this.getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public bool isAllVisited2(){

                        if(this.totalVisited == this.getSize())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public bool isPortionVisited(BasicDecimal basicDecimal){

    size: int32_t = this.getSize()!;;
    

    numberRequired: int32_t = (size<<basicDecimal!.getScaledFactor()) /static_cast<int32_t>(basicDecimal!.getUnscaled());;
    

    numberNotVisited: int32_t = this.getSize() -1 -this.totalVisited;;
    

                        if(size -numberNotVisited > numberRequired)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public reset(){

    localVisitedList: BasicArrayList = this.visitedList;;
    

    localFalseBoolean: Boolean = this.booleanFactory!.FALSE;;
    

    size: int32_t = localVisitedList!.size()!;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {
localVisitedList!.set(index, localFalseBoolean);
    
}

this.totalVisited= 0;
    
}


    paintNotVisitedRelativeToPoint(Graphics graphics, AllBinaryTiledLayer tiledLayer, GPoint point){

    x: int32_t = point.getX() -tiledLayer!.getXP();;
    

    y: int32_t = point.getY() -tiledLayer!.getYP();;
    

                        if(this.halfWidth == 0)
                        
                                    {
                                    this.halfWidth= (graphics.getFont()!.stringWidth(this.MISSED_INFO)>>1);
    

                                    }
                                

    height: int32_t = 2 *this.fontHeight;;
    
this.animation.paintXY(graphics, x +this.halfWidth, y +(height));
    
}


    private: const RED: int32_t = BasicColorFactory.getInstance()!.RED.intValue()!;

    public paintNotVisited(Graphics graphics, BasicGeographicMap geographicMapInterface){

        try {
            this.myFontProcessor!.process(graphics);
    
graphics.setColor(this.RED);
    

    localVisitedList: BasicArrayList = this.visitedList;;
    

    size: int32_t = localVisitedList!.size()!;;
    

    geographicMapCellPosition: GeographicMapCellPosition;;
    

    isCellVisitedBoolean: Boolean;;
    




                        for (
    index: int32_t = size;--index >= 0; )
        {
geographicMapCellPosition= this.list.get(index) as GeographicMapCellPosition;
    
isCellVisitedBoolean= localVisitedList!.get(index) as Boolean;
    

                        if(!isCellVisitedBoolean.valueOf())
                        
                                    {
                                    this.paintNotVisitedRelativeToPoint(graphics, geographicMapInterface!.getAllBinaryTiledLayer(), geographicMapCellPosition!.getPoint());
    

                                    }
                                
}


                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "paintNotVisited", e);
    
}

}


    public init(){
this.list.clear();
    
this.visitedList!.clear();
    
this.totalVisited= 0;
    
}


};

            

