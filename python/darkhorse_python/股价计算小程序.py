name='Chuanzhi blog'
stock_price=19.99
stock_code='003032'
stock_price_daily_growth_factor=1.2
growth_days=7
message1=f'comapny:{name},stock code:{stock_code},current stock price:{stock_price}'
message2='coefficient of daily growth is:%.1f,after %d days of grow,the stock price has reached:%.2f'%(stock_price_daily_growth_factor,growth_days,(stock_price*stock_price_daily_growth_factor**growth_days))
print(message1)
print(message2)