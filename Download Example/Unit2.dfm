object Form2: TForm2
  Left = 762
  Top = 128
  Width = 314
  Height = 212
  Caption = 'Focas2 Connect'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 28
    Top = 20
    Width = 9
    Height = 13
    Caption = 'Ip'
  end
  object Label2: TLabel
    Left = 28
    Top = 44
    Width = 19
    Height = 13
    Caption = 'Port'
  end
  object Edit1: TEdit
    Left = 72
    Top = 16
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '127.0.0.1'
  end
  object Edit2: TEdit
    Left = 72
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '8193'
  end
  object Button1: TButton
    Left = 200
    Top = 16
    Width = 75
    Height = 25
    Caption = #36899#32218
    TabOrder = 2
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 72
    Width = 177
    Height = 81
    Caption = #36899#32218#26041#24335
    TabOrder = 3
    object RadioButton1: TRadioButton
      Left = 24
      Top = 24
      Width = 113
      Height = 17
      Caption = 'Ethernet'
      Checked = True
      TabOrder = 0
      TabStop = True
    end
    object RadioButton2: TRadioButton
      Left = 24
      Top = 48
      Width = 113
      Height = 17
      Caption = 'HSSB'
      TabOrder = 1
    end
  end
end
