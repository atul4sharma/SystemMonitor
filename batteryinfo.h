//This file is generated by CODE GEN Version 1 on Tue Jan 3 18:20:58 2017
//Atul Sharma

#ifndef BATTERYINFO_H
#define BATTERYINFO_H

#include <QDebug>

class BatteryInfo {

	private:
		QString mName;
		QString mStatus;
        int     mSupplyPresent;
		QString mSupplyTechnology;
		quint64 mSupplyCycleCount;
		quint64 mSupplyVoltageMinDesign;
		quint64 mSupplyVoltageNow;
		quint64 mSupplyCurrentNow;
		quint64 mSupplyChargeFullDesign;
		quint64 mSupplyChargeFull;
		quint64 mSupplyChargeNow;
		quint64 mSupplyCapacity;
		QString mSupplyCapacityLevel;
		QString mSupplyModelName;
		QString mSupplyManufacturer;

	public:
		explicit BatteryInfo();

		void setName(QString val);
		void setStatus(QString val);
		void setSupplyPresent(int val);
		void setSupplyTechnology(QString val);
		void setSupplyCycleCount(quint64 val);
		void setSupplyVoltageMinDesign(quint64 val);
		void setSupplyVoltageNow(quint64 val);
		void setSupplyCurrentNow(quint64 val);
		void setSupplyChargeFullDesign(quint64 val);
		void setSupplyChargeFull(quint64 val);
		void setSupplyChargeNow(quint64 val);
		void setSupplyCapacity(quint64 val);
		void setSupplyCapacityLevel(QString val);
		void setSupplyModelName(QString val);
		void setSupplyManufacturer(QString val);

		QString getName () const;
		QString getStatus () const;
		int getSupplyPresent () const;
		QString getSupplyTechnology () const;
		quint64 getSupplyCycleCount () const;
		quint64 getSupplyVoltageMinDesign () const;
		quint64 getSupplyVoltageNow () const;
		quint64 getSupplyCurrentNow () const;
		quint64 getSupplyChargeFullDesign () const;
		quint64 getSupplyChargeFull () const;
		quint64 getSupplyChargeNow () const;
		quint64 getSupplyCapacity () const;
		QString getSupplyCapacityLevel () const;
		QString getSupplyModelName () const;
		QString getSupplyManufacturer () const;

        void showInfo();

};

#endif //BATTERYINFO_H
