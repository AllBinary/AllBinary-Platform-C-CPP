
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
        



            #include "../../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptOutput.h"
#include "ImageActionScriptOutputInterface.h"
#include "ImageTypes.h"
#include "ImageActionScriptOutputJPanel.h"
#include "ImageActionScriptOutputData.h"
#include "ImageActionScriptOutputProcessor.h"

class ImageActionScriptOutput: public BasicProfileActionScriptOutput: public ImageActionScriptOutputInterface {
        

    private: static const NAME: string = "Captures";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: saved: bool = false;

    private: display: bool = false;

    private: imageTypes: ImageTypes;

    private: actionScriptOutputJPanel: ImageActionScriptOutputJPanel;

public constructor (Node node){
            super(NAME, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

    actionNode: Node = DomSearchHelper.getNode(ImageActionScriptOutputData.NAME, node.getChildNodes())!;;
    

                        if(actionNode != 
                                    null
                                )
                        
                                    {
                                    
    nodeList: NodeList = actionNode!.getChildNodes()!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    childNode: Node = nodeList!.item(index)!;;
    

                        if(childNode!.getNodeName()!.compareTo(ImageActionScriptOutputData.SAVE) == 0)
                        
                                    {
                                    
    booleanString: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.setSaved(.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ImageActionScriptOutputData.DISPLAY) == 0)
                        
                                    {
                                    
    booleanString: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.setSaved(.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(ImageActionScriptOutputData.TYPES) == 0)
                        
                                    {
                                    this.setImageTypes(new ImageTypes(childNode));
    

                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Output Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Output Node Null");
                    

                        }
                            
this.setAllowsChildren(false);
    
this.actionScriptOutputJPanel= new ImageActionScriptOutputJPanel(this);
    
}


public constructor (){
            super(NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setImageTypes(new ImageTypes());
    
this.setAllowsChildren(false);
    
this.actionScriptOutputJPanel= new ImageActionScriptOutputJPanel(this);
    
}


    public ImageActionScriptOutputJPanel getActionScriptOutputJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.actionScriptOutputJPanel;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(ImageActionScriptOutputData.DISPLAY, Boolean.toString(this.isDisplay()));
    
hashMap!.put(ImageActionScriptOutputData.SAVE, Boolean.toString(this.isSaved()));
    
this.logUtil!.putF("HashMap: " +hashMap!.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = super.toXmlNode(document)!;;
    

    newNode: Node = ModDomHelper.createNodeWithValueNodes(document, ImageActionScriptOutputData.NAME, this.toHashMap())!;;
    
newNode!.appendChild(this.getImageTypes()!.toXmlNode(document));
    
node.appendChild(newNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public process(Long frame){
ImageActionScriptOutputProcessor.process(this, frame);
    
}


    public showDialog(){
this.actionScriptOutputJPanel!.getCapturedImageActionJDialog()!.setVisible(true);
    
}


    public bool isSaved(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.saved;
    
}


    public setSaved(bool saved){
this.saved= saved;
    
}


    public bool isDisplay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.display;
    
}


    public setDisplay(bool display){
this.display= display;
    
}


    public string future_toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(" Is Save: ");
    
stringBuffer!.appendboolean(this.isSaved());
    
stringBuffer!.append(" Is Display: ");
    
stringBuffer!.appendboolean(this.isDisplay());
    
stringBuffer!.append(" ");
    
stringBuffer!.append(this.getImageTypes()!.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public log(){
this.logUtil!.putF(this.future_toString(), this, "log");
    
}


    public ImageTypes getImageTypes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageTypes;
    
}


    public setImageTypes(ImageTypes imageTypes){
this.imageTypes= imageTypes;
    
}


};

            

