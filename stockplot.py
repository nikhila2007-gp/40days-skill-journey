import pandas as pd
import matplotlib.pyplot as p
url='https://raw.githubusercontent.com/datasets/finance-vix/master/data/vix-daily.csv'
data=pd.read_csv(url)
print(data.head())
data['Date']=pd.to_datetime(data['Date'])
p.figure(figsize=(11,5))
p.plot(data['Date'],data['Close'])
p.title('Stock Closing Prices Over Time')
p.xlabel('Date')
p.ylabel('Price')
p.grid(True)
p.savefig('images/stock_plot.png')
p.show()

