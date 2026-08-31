
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorData.h"
#include "ColorsData.h"

class ColorsView
            : public Object
        : public DomNodeInterface {
        

    private: const commonPhoneStrings: CommonPhoneStrings = CommonPhoneStrings.getInstance()!;

    private: const HEXRADIX: int32_t = 16;

    private: const MAX: int32_t = 255;

    const delta: int32_t = 20;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public Node getColorNode(Document document, int32_t redIndex, int32_t greenIndex, int32_t blueIndex){

    hexColorStringBuffer: StringMaker = new StringMaker();;
    

                        if(redIndex < this.HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer!.append(this.commonPhoneStrings!.ZERO);
    

                                    }
                                
hexColorStringBuffer!.append(redIndex, HEXRADIX.toString());
    

                        if(greenIndex < this.HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer!.append(this.commonPhoneStrings!.ZERO);
    

                                    }
                                
hexColorStringBuffer!.append(greenIndex, HEXRADIX.toString());
    

                        if(blueIndex < this.HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer!.append(this.commonPhoneStrings!.ZERO);
    

                                    }
                                
hexColorStringBuffer!.append(blueIndex, HEXRADIX.toString());
    

    colorNode: Node = ModDomHelper.createNameValueNodes(document, ColorData.getInstance()!.NAME, hexColorStringBuffer!.toString())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return colorNode;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = ModDomHelper.createNameValueNodes(document, ColorsData.getInstance()!.NAME, "RGB Colors In Hex")!;;
    

    blackNode: Node = ModDomHelper.createNameValueNodes(document, ColorData.getInstance()!.NAME, "000000")!;;
    
node.appendChild(blackNode);
    




                        for (
    index: int32_t = 0;index < this.MAX; )
        {

    hexColorStringBuffer: StringMaker = new StringMaker();;
    

                        if(index < this.HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer!.append(this.commonPhoneStrings!.ZERO);
    

                                    }
                                
hexColorStringBuffer!.append(index, HEXRADIX.toString());
    

                        if(index < this.HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer!.append(this.commonPhoneStrings!.ZERO);
    

                                    }
                                
hexColorStringBuffer!.append(index, HEXRADIX.toString());
    

                        if(index < this.HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer!.append(this.commonPhoneStrings!.ZERO);
    

                                    }
                                
hexColorStringBuffer!.append(index, HEXRADIX.toString());
    

    colorNode: Node = ModDomHelper.createNameValueNodes(document, ColorData.getInstance()!.NAME, hexColorStringBuffer!.toString())!;;
    
node.appendChild(colorNode);
    
}


    whiteNode: Node = ModDomHelper.createNameValueNodes(document, ColorData.getInstance()!.NAME, "FFFFFF")!;;
    
node.appendChild(whiteNode);
    




                        for (
    blueIndex: int32_t = this.MAX /2;blueIndex < this.MAX; )
        {




                        for (
    greenIndex: int32_t = 0;greenIndex < this.MAX /2; )
        {




                        for (
    redIndex: int32_t = 0;redIndex < this.MAX /2; )
        {
node.appendChild(this.getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}





                        for (
    redIndex: int32_t = this.MAX /2;redIndex < this.MAX; )
        {




                        for (
    greenIndex: int32_t = 0;greenIndex < this.MAX /2; )
        {




                        for (
    blueIndex: int32_t = 0;blueIndex < this.MAX /2; )
        {
node.appendChild(this.getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}





                        for (
    greenIndex: int32_t = this.MAX /2;greenIndex < this.MAX; )
        {




                        for (
    redIndex: int32_t = 0;redIndex < this.MAX /2; )
        {




                        for (
    blueIndex: int32_t = 0;blueIndex < this.MAX /2; )
        {
node.appendChild(this.getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}





                        for (
    greenIndex: int32_t = 0;greenIndex < this.MAX; )
        {




                        for (
    redIndex: int32_t = 0;redIndex < this.MAX; )
        {




                        for (
    blueIndex: int32_t = 0;blueIndex < this.MAX; )
        {
node.appendChild(this.getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

