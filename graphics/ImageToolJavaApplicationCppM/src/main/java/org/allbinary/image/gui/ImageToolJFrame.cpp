
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <java/util/Arrays.h>

      
#include <java/util/Comparator.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/gui/dialog/FileJDialog.h>

      
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/analysis/ColorRange.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysis.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JFrame.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JTextField.h"
#include "JButton.h"
#include "JPanel.h"
#include "JMenuBar.h"
#include "JMenu.h"
#include "JMenuItem.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "GridLayout.h"
#include "ImageUnifierJPanel.h"
#include "ImageAnalysisResultsJPanel.h"
#include "RotationSpriteImageJPanel.h"
#include "SpriteSplitterImageJPanel.h"
#include "RotationImageJPanel.h"
#include "ResizeImageJPanel.h"
#include "CreateIconImagesJPanel.h"
#include "CanvasImageJPanel.h"
#include "MirrorSpriteImageJPanel.h"
#include "MirrorImageJPanel.h"

class ImageToolJFrame: public javax.swing.JFrame: public FileJDialogListenerInterface {
        

    private: static imageProcessorInputCompositeInterface: ImageProcessorInputCompositeInterface;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: fileJDialog: FileJDialog;

    private: imageProcessorInput: ImageProcessorInput;

public constructor (){

            super();
        this.initComponents();
    

    commonPhoneStrings: CommonPhoneStrings = CommonPhoneStrings.getInstance()!;;
    
this.setSize(640, 480);
    
this.getMaxRedJTextField()!.setText("255");
    
this.getMaxGreenJTextField()!.setText("255");
    
this.getMaxBlueJTextField()!.setText("255");
    
this.getMinRedJTextField()!.setText(commonPhoneStrings!.ZERO);
    
this.getMinGreenJTextField()!.setText(commonPhoneStrings!.ZERO);
    
this.getMinBlueJTextField()!.setText(commonPhoneStrings!.ZERO);
    
this.fileJDialog= new FileJDialog();
    
this.fileJDialog!.addFinishedListener(this);
    
}


    initComponents(){
analysisActionJDialog= new javax.swing.JDialog();
    
this.titleJLabel= new javax.swing.JLabel();
    
this.colorRangeJLabel= new javax.swing.JLabel();
    
this.redJLabel= new javax.swing.JLabel();
    
this.minJLabel= new javax.swing.JLabel();
    
this.maxJLabel= new javax.swing.JLabel();
    
this.greenJLabel= new javax.swing.JLabel();
    
this.blueJLabel= new javax.swing.JLabel();
    
this.minRedJTextField= new javax.swing.JTextField();
    
this.maxRedJTextField= new javax.swing.JTextField();
    
this.maxGreenJTextField= new javax.swing.JTextField();
    
this.minBlueJTextField= new javax.swing.JTextField();
    
this.maxBlueJTextField= new javax.swing.JTextField();
    
this.okJButton= new javax.swing.JButton();
    
this.minGreenJTextField= new javax.swing.JTextField();
    
this.jPanel1= new javax.swing.JPanel();
    
this.mainJMenuBar= new javax.swing.JMenuBar();
    
this.fileJMenu= new javax.swing.JMenu();
    
this.openImageJMenuItem= new javax.swing.JMenuItem();
    
this.processingJMenu= new javax.swing.JMenu();
    
this.analyzeJMenuItem= new javax.swing.JMenuItem();
    
this.generateSpriteSplitterMenuItem= new javax.swing.JMenuItem();
    
this.generateRotationMenuItem= new javax.swing.JMenuItem();
    
this.generateMirrorSpriteMenuItem= new javax.swing.JMenuItem();
    
this.generateRotationSpriteJMenuItem= new javax.swing.JMenuItem();
    
this.createStripImageJMenuItem= new javax.swing.JMenuItem();
    
this.mirrorJMenuItem= new javax.swing.JMenuItem();
    
this.scaleImagesJMenuItem= new javax.swing.JMenuItem();
    
this.canvasImagesJMenuItem= new javax.swing.JMenuItem();
    
this.createIconImagesJMenuItem= new javax.swing.JMenuItem();
    
this.analysisActionJDialog!.setMinimumSize(new java.awt.Dimension(350, 250));
    
this.titleJLabel!.setText("              Color At Action Options            ");
    
this.colorRangeJLabel!.setText("Color Range");
    
this.redJLabel!.setText("Red:");
    
this.minJLabel!.setText("Minimum");
    
this.maxJLabel!.setText("Maximum");
    
this.greenJLabel!.setText("Green:");
    
this.blueJLabel!.setText("Blue:");
    
this.okJButton!.setText("OK");
    
this.okJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    analysisActionJDialogLayout: org.jdesktop.layout.GroupLayout = new org.jdesktop.layout.GroupLayout(this.analysisActionJDialog!.getContentPane());;
    
this.analysisActionJDialog!.getContentPane()!.setLayout(analysisActionJDialogLayout);
    
analysisActionJDialogLayout!.setHorizontalGroup(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(analysisActionJDialogLayout!.createSequentialGroup()!.addContainerGap()!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(analysisActionJDialogLayout!.createSequentialGroup()!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(blueJLabel)!.add(greenJLabel)!.add(redJLabel)!.add(colorRangeJLabel))!.add(29, 29, 29)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(org.jdesktop.layout.GroupLayout.TRAILING, minJLabel, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 58, Short.MAX_VALUE)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING, false)!.add(org.jdesktop.layout.GroupLayout.LEADING, minBlueJTextField)!.add(org.jdesktop.layout.GroupLayout.LEADING, minGreenJTextField)!.add(org.jdesktop.layout.GroupLayout.LEADING, minRedJTextField, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 42, Short.MAX_VALUE)!.add(org.jdesktop.layout.GroupLayout.LEADING, okJButton)))!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)!.add(org.jdesktop.layout.GroupLayout.LEADING, analysisActionJDialogLayout!.createSequentialGroup()!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING, false)!.add(org.jdesktop.layout.GroupLayout.LEADING, maxRedJTextField)!.add(org.jdesktop.layout.GroupLayout.LEADING, analysisActionJDialogLayout!.createSequentialGroup()!.add(1, 1, 1)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(maxBlueJTextField)!.add(maxGreenJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 43, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))))!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED, 17, Short.MAX_VALUE))!.add(org.jdesktop.layout.GroupLayout.LEADING, maxJLabel, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 61, Short.MAX_VALUE))!.addContainerGap())!.add(org.jdesktop.layout.GroupLayout.TRAILING, analysisActionJDialogLayout!.createSequentialGroup()!.add(titleJLabel)!.add(25, 25, 25)))));
    
analysisActionJDialogLayout!.setVerticalGroup(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(analysisActionJDialogLayout!.createSequentialGroup()!.add(titleJLabel)!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)!.add(minJLabel)!.add(colorRangeJLabel)!.add(maxJLabel))!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)!.add(redJLabel)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)!.add(minRedJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.add(maxRedJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)!.add(greenJLabel)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)!.add(minGreenJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.add(maxGreenJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)!.add(blueJLabel)!.add(analysisActionJDialogLayout!.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)!.add(minBlueJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.add(maxBlueJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))!.add(16, 16, 16)!.add(okJButton)!.addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
    
getContentPane()!.setLayout(new java.awt.GridLayout(1, 0));
    
this.jPanel1!.setLayout(new java.awt.GridLayout(1, 0));
    
getContentPane()!.add(this.jPanel1);
    
this.fileJMenu!.setText("File");
    
this.fileJMenu!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
fileJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this.openImageJMenuItem!.setText("Open");
    
this.openImageJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
openImageJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.fileJMenu!.add(this.openImageJMenuItem);
    
this.mainJMenuBar!.add(this.fileJMenu);
    
this.processingJMenu!.setText("Processing");
    
this.processingJMenu!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
processingJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this.analyzeJMenuItem!.setText("Image Analyze");
    
this.analyzeJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
analyzeJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.analyzeJMenuItem);
    
this.generateMirrorSpriteMenuItem!.setText("Mirror Sprite Generator");
    
this.generateMirrorSpriteMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
generateMirrorSpriteMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.generateMirrorSpriteMenuItem);
    
this.generateRotationSpriteJMenuItem!.setText("Rotation Sprite Generator");
    
this.generateRotationSpriteJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
generateRotationSpriteJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.generateRotationSpriteJMenuItem);
    
this.generateSpriteSplitterMenuItem!.setText("Sprite Splitter Generator");
    
this.generateSpriteSplitterMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
generateSpriteSplitterMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.generateSpriteSplitterMenuItem);
    
this.generateRotationMenuItem!.setText("Rotate Image Generator");
    
this.generateRotationMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
generateRotationMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.generateRotationMenuItem);
    
this.createStripImageJMenuItem!.setText("Multi Image Unifier");
    
this.createStripImageJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
createStripImageJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.createStripImageJMenuItem);
    
this.mirrorJMenuItem!.setText("Mirror Image(s)");
    
this.mirrorJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
mirrorJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.mirrorJMenuItem);
    
this.scaleImagesJMenuItem!.setText("Scale Image(s)");
    
this.scaleImagesJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
scaleImagesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.scaleImagesJMenuItem);
    
this.canvasImagesJMenuItem!.setText("Canvas Image(s)");
    
this.canvasImagesJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
canvasImagesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.canvasImagesJMenuItem);
    
this.createIconImagesJMenuItem!.setText("Create Icon Image(s)");
    
this.createIconImagesJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
createIconsJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.createIconImagesJMenuItem);
    
this.mainJMenuBar!.add(this.processingJMenu);
    
setJMenuBar(this.mainJMenuBar);
    
pack();
    
}


    createStripImageJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            
    imageUnifierJPanel: ImageUnifierJPanel = new ImageUnifierJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(imageUnifierJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= imageUnifierJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "createStripImageJMenuItemActionPerformed", e);
    
}

}


    okJButtonActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "okJButtonActionPerformed");
    

    imageAnalysisResultsArray: std::vector<ImageAnalysisResults> = ImageAnalysis.getInstance()!.process(this.imageProcessorInput!.getBufferedImageArray(), this.getColorRangeInterface())!;;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(new ImageAnalysisResultsJPanel(imageAnalysisResultsArray));
    
this.jPanel1!.updateUI();
    
this.analysisActionJDialog!.setVisible(false);
    
ImageToolJFrame.imageProcessorInputCompositeInterface= 
                                        nullptr
                                    ;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "okJButtonActionPerformed", e);
    
}

}


    processingJMenuActionPerformed(java.awt.event.ActionEvent evt){
}


    openImageJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "openImageJMenuItemActionPerformed");
    
this.fileJDialog!.setVisible(true);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "openImageJMenuItemActionPerformed", e);
    
}

}


    public onFiles(std::vector<File> files){

        try {
            this.logUtil!.putF("Reading " +files.length +" files.", this, "onFiles");
    
Arrays.sort(files, new class extends Comparator<File>
                                {
                                
    public int32_t compare(File file1, File file2){

    fileNameIndexValue1: int32_t = extractIndexNumberIfAnyFromFileName(file1.getName())!;;
    

    fileNameIndexValue2: int32_t = extractIndexNumberIfAnyFromFileName(file2.getName())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fileNameIndexValue1 -fileNameIndexValue2;
    
}

    int32_t extractIndexNumberIfAnyFromFileName(string name){

    i: int32_t = 0;;
    

        try {
            
    start: int32_t = name.lastIndexOf('_') +1;;
    

    end: int32_t = name.lastIndexOf('.')!;;
    

    number: string = name.substring(start, end)!;;
    
i= Integer.parseInt(number);
    

                //: 
} catch(e) 
            {
i= 0;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    
}

                                }
                            );
    

    bufferedImageArray: std::vector<BufferedImage> = new Array(files.length);;
    




                        for (
    index: int32_t = 0;index < files.length; index++)
        {
bufferedImageArray[index]= ImageIO.read(files[index]!);
    

                        if(bufferedImageArray[index] == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Unable to read file: " +files[index]!.getPath());
                    

                                    }
                                
}

this.imageProcessorInput= new ImageProcessorInput(files, bufferedImageArray);
    
this.fileJDialog!.setVisible(false);
    

                        if(ImageToolJFrame.imageProcessorInputCompositeInterface != 
                                    null
                                )
                        
                                    {
                                    ImageToolJFrame.imageProcessorInputCompositeInterface!.setImageProcessorInput(this.imageProcessorInput);
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onFiles", e);
    
}

}


    fileJMenuActionPerformed(java.awt.event.ActionEvent evt){
}


    analyzeJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "analyzeJMenuItemActionPerformed");
    
this.analysisActionJDialog!.setVisible(true);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "analyzeJMenuItemActionPerformed", e);
    
}

}


    generateRotationSpriteJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
    

    spriteImageJPanel: RotationSpriteImageJPanel = new RotationSpriteImageJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(spriteImageJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= spriteImageJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generateRotationSpriteJMenuItemActionPerformed", e);
    
}

}


    generateSpriteSplitterMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
    

    imageJPanel: SpriteSplitterImageJPanel = new SpriteSplitterImageJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(imageJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= imageJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generateRotationMenuItemActionPerformed", e);
    
}

}


    generateRotationMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
    

    rotationImageJPanel: RotationImageJPanel = new RotationImageJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(rotationImageJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= rotationImageJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generateRotationMenuItemActionPerformed", e);
    
}

}


    scaleImagesJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "scaleImagesJMenuItemActionPerformed");
    

    resizeImageJPanel: ResizeImageJPanel = new ResizeImageJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(resizeImageJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= resizeImageJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", e);
    
}

}


    createIconsJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "createIconsJMenuItemActionPerformed");
    

    createIconImagesJPanel: CreateIconImagesJPanel = new CreateIconImagesJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(createIconImagesJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= createIconImagesJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", e);
    
}

}


    canvasImagesJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "canvasImagesJMenuItemActionPerformed");
    

    resizeImageJPanel: CanvasImageJPanel = new CanvasImageJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(resizeImageJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= resizeImageJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", e);
    
}

}


    generateMirrorSpriteMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "generateMirrorSpriteJMenuItemActionPerformed");
    

    spriteImageJPanel: MirrorSpriteImageJPanel = new MirrorSpriteImageJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(spriteImageJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= spriteImageJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generateMirrorSpriteJMenuItemActionPerformed", e);
    
}

}


    mirrorJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "generateMirrorJMenuItemActionPerformed");
    

    mirrorImageJPanel: MirrorImageJPanel = new MirrorImageJPanel(this.imageProcessorInput);;
    
this.jPanel1!.removeAll();
    
this.jPanel1!.add(mirrorImageJPanel);
    
this.jPanel1!.updateUI();
    
ImageToolJFrame.imageProcessorInputCompositeInterface= mirrorImageJPanel;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generateMirrorJMenuItemActionPerformed", e);
    
}

}


    ColorRangeInterface getColorRangeInterface(){

    colorRangeInterface: ColorRangeInterface = new ColorRange() as ColorRangeInterface;;
    
colorRangeInterface!.setMinRed(new Integer(this.getMinRedJTextField()!.getText()).intValue());
    
colorRangeInterface!.setMaxRed(new Integer(this.getMaxRedJTextField()!.getText()).intValue());
    
colorRangeInterface!.setMinGreen(new Integer(this.getMinGreenJTextField()!.getText()).intValue());
    
colorRangeInterface!.setMaxGreen(new Integer(this.getMaxGreenJTextField()!.getText()).intValue());
    
colorRangeInterface!.setMinBlue(new Integer(this.getMinBlueJTextField()!.getText()).intValue());
    
colorRangeInterface!.setMaxBlue(new Integer(this.getMaxBlueJTextField()!.getText()).intValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return colorRangeInterface;
    
}


    public javax.swing.JTextField getMaxBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxBlueJTextField;
    
}


    public setMaxBlueJTextField(javax.swing.JTextField maxBlueJTextField){
this.maxBlueJTextField= this.maxBlueJTextField;
    
}


    public javax.swing.JTextField getMaxGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxGreenJTextField;
    
}


    public setMaxGreenJTextField(javax.swing.JTextField maxGreenJTextField){
this.maxGreenJTextField= this.maxGreenJTextField;
    
}


    public javax.swing.JTextField getMaxRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxRedJTextField;
    
}


    public setMaxRedJTextField(javax.swing.JTextField maxRedJTextField){
this.maxRedJTextField= this.maxRedJTextField;
    
}


    public javax.swing.JTextField getMinBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minBlueJTextField;
    
}


    public setMinBlueJTextField(javax.swing.JTextField minBlueJTextField){
this.minBlueJTextField= this.minBlueJTextField;
    
}


    public javax.swing.JTextField getMinGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minGreenJTextField;
    
}


    public setMinGreenJTextField(javax.swing.JTextField minGreenJTextField){
this.minGreenJTextField= this.minGreenJTextField;
    
}


    public javax.swing.JTextField getMinRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minRedJTextField;
    
}


    public setMinRedJTextField(javax.swing.JTextField minRedJTextField){
this.minRedJTextField= this.minRedJTextField;
    
}


    private: analysisActionJDialog: javax.swing.JDialog;

    private: analyzeJMenuItem: javax.swing.JMenuItem;

    private: blueJLabel: javax.swing.JLabel;

    private: colorRangeJLabel: javax.swing.JLabel;

    private: createStripImageJMenuItem: javax.swing.JMenuItem;

    private: fileJMenu: javax.swing.JMenu;

    private: generateSpriteSplitterMenuItem: javax.swing.JMenuItem;

    private: generateRotationMenuItem: javax.swing.JMenuItem;

    private: generateMirrorSpriteMenuItem: javax.swing.JMenuItem;

    private: generateRotationSpriteJMenuItem: javax.swing.JMenuItem;

    private: greenJLabel: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: mainJMenuBar: javax.swing.JMenuBar;

    private: maxBlueJTextField: javax.swing.JTextField;

    private: maxGreenJTextField: javax.swing.JTextField;

    private: maxJLabel: javax.swing.JLabel;

    private: maxRedJTextField: javax.swing.JTextField;

    private: minBlueJTextField: javax.swing.JTextField;

    private: minGreenJTextField: javax.swing.JTextField;

    private: minJLabel: javax.swing.JLabel;

    private: minRedJTextField: javax.swing.JTextField;

    private: mirrorJMenuItem: javax.swing.JMenuItem;

    private: okJButton: javax.swing.JButton;

    private: openImageJMenuItem: javax.swing.JMenuItem;

    private: processingJMenu: javax.swing.JMenu;

    private: redJLabel: javax.swing.JLabel;

    private: scaleImagesJMenuItem: javax.swing.JMenuItem;

    private: canvasImagesJMenuItem: javax.swing.JMenuItem;

    private: createIconImagesJMenuItem: javax.swing.JMenuItem;

    private: titleJLabel: javax.swing.JLabel;

};

            

