
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/media/image/analysis/ColorRange.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptCondition.h"
#include "ColorAtActionScriptConditionInterface.h"
#include "ColorAtActionScriptConditionJPanel.h"
#include "Point.h"
#include "ColorAtActionScriptConditionData.h"
#include "Color.h"

class ColorAtActionScriptCondition: public BasicProfileActionScriptCondition: public ColorAtActionScriptConditionInterface {
        

    private: static const NAME: string = "If Color At";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: colorAtActionScriptConditionJPanel: ColorAtActionScriptConditionJPanel;

    private: point: Point;

    private: colorRangeInterface: ColorRangeInterface = new ColorRange() as ColorRangeInterface;

public constructor (Node node){
            super(ColorAtActionScriptCondition.NAME, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.point= new Point(0, 0);
    

    actionNode: Node = DomSearchHelper.getNode(ColorAtActionScriptConditionData.NAME, node.getChildNodes())!;;
    

                        if(actionNode != 
                                    null
                                )
                        
                                    {
                                    
    nodeList: NodeList = actionNode!.getChildNodes()!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    childNode: Node = nodeList!.item(index)!;;
    

                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.LOCATION_X) == 0)
                        
                                    {
                                    
    locationX: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.point.x= Integer.valueOf(locationX);
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.LOCATION_Y) == 0)
                        
                                    {
                                    
    locationY: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.point.y= Integer.valueOf(locationY);
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.MIN_RED) == 0)
                        
                                    {
                                    
    string: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.getColorRangeInterface()!.setMinRed(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.MAX_RED) == 0)
                        
                                    {
                                    
    string: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.getColorRangeInterface()!.setMaxRed(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.MIN_GREEN) == 0)
                        
                                    {
                                    
    string: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.getColorRangeInterface()!.setMinGreen(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.MAX_GREEN) == 0)
                        
                                    {
                                    
    string: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.getColorRangeInterface()!.setMaxGreen(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.MIN_BLUE) == 0)
                        
                                    {
                                    
    string: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.getColorRangeInterface()!.setMinBlue(string.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ColorAtActionScriptConditionData.MAX_BLUE) == 0)
                        
                                    {
                                    
    string: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.getColorRangeInterface()!.setMaxBlue(string.valueOf());
    

                                    }
                                
}


                                    }
                                
                        else {
                            


                            throw new Exception("Color At Action Script Condition Node Null");
                    

                        }
                            
this.init();
    
}


public constructor (){
            super(ColorAtActionScriptCondition.NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.point= new Point(0, 0);
    
this.init();
    
}


    init(){
this.colorAtActionScriptConditionJPanel= new ColorAtActionScriptConditionJPanel(this);
    
}


    public Point getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.point;
    
}


    public setPoint(Point point){
this.point= point;
    
}


    public showDialog(){
this.colorAtActionScriptConditionJPanel!.getColorAtActionJDialog()!.setVisible(true);
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(ColorAtActionScriptConditionData.LOCATION_X, Integer.toString(this.getPoint()!.x));
    
hashMap!.put(ColorAtActionScriptConditionData.LOCATION_Y, Integer.toString(this.getPoint()!.y));
    
hashMap!.put(ColorAtActionScriptConditionData.MIN_RED, Integer.toString(this.getColorRangeInterface()!.getMinRed()));
    
hashMap!.put(ColorAtActionScriptConditionData.MAX_RED, Integer.toString(this.getColorRangeInterface()!.getMaxRed()));
    
hashMap!.put(ColorAtActionScriptConditionData.MIN_GREEN, Integer.toString(this.getColorRangeInterface()!.getMinGreen()));
    
hashMap!.put(ColorAtActionScriptConditionData.MAX_GREEN, Integer.toString(this.getColorRangeInterface()!.getMaxGreen()));
    
hashMap!.put(ColorAtActionScriptConditionData.MIN_BLUE, Integer.toString(this.getColorRangeInterface()!.getMinBlue()));
    
hashMap!.put(ColorAtActionScriptConditionData.MAX_BLUE, Integer.toString(this.getColorRangeInterface()!.getMaxBlue()));
    
this.logUtil!.putF("HashMap: " +hashMap!.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = super.toXmlNode(document)!;;
    
node.appendChild(ModDomHelper.createNodeWithValueNodes(document, ColorAtActionScriptConditionData.NAME, this.toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public bool shouldProcess(int64_t frame){

    capturedBufferedImageCacheable: BufferedImageFrameCacheable = (getInstance as AutomaticCacheInterface).get((frame).toLong()) as BufferedImageFrameCacheable;;
    

    bufferedImage: BufferedImage = capturedBufferedImageCacheable!.getBufferedImage()!;;
    

    automaticCacheInterface: AutomaticCacheInterface = ColorCacheFactory.getInstance()!;;
    

    colorInteger: Integer = Integer.valueOf(bufferedImage!.getRGB(this.getPoint()!.x, this.getPoint()!.y))!;;
    

    colorCacheable: ColorCacheable = automaticCacheInterface!.get(colorInteger) as ColorCacheable;;
    

    color: Color = colorCacheable!.getColor()!;;
    

                        if(this.colorRangeInterface!.isInRange(color))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public log(){

    message: string = new StringMaker().append("getPoint(): ")!.append(this.getPoint()!.toString())!.append(CommonSeps.getInstance()!.NEW_LINE)!.append(this.getColorRangeInterface()!.toString())!.toString()!;;
    
this.logUtil!.putF(message, this, "log");
    
}


    public ColorRangeInterface getColorRangeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorRangeInterface;
    
}


    public setColorRangeInterface(ColorRangeInterface colorRangeInterface){
this.colorRangeInterface= colorRangeInterface;
    
}


};

            

