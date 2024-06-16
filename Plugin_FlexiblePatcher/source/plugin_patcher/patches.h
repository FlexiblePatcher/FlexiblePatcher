typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned long ulong;

void pcbSaveMyData(void);
void pcbLoadMyData(void);
void pcbInitLoadNewLevel(void);
long pcbFlipEffectMine(ushort FlipIndex, ushort Timer, ushort Extra, ushort ActivationMode);
long pcbActionMine(ushort ActionIndex, long ItemIndex, ushort Extra, ushort ActivationMode);
long pcbConditionMine(ushort ConditionIndex, long ItemIndex, ushort Extra, ushort ActivationMode);
void pcbCustomizeMine(ushort CustomizeValue, long NumberOfItems, short* pItemArray);
void pcbParametersMine(ushort ParameterValue, long NumberOfItems, short* pItemArray);
void pcbAssignSlotMine(ushort Slot, ushort ObjType);
void pcbInitObjects(void);
void pcbInitGame(void);
void pcbInitLevel(void);
void Inject(void);

extern StrBaseVarAll* pBaseVariableTRNG;
extern uchar* pPatchMap;
